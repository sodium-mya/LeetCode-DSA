class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& arr) {
    int ans = 1;
    int count[10];

    for (int i=0; i<9; i++){
        for (int j=0; j<9; j++){
            arr[i][j] = (arr[i][j]=='.') ? 0 : arr[i][j]-'0';
        }
    }
    // rows
    for (int r=0; r<9 && ans; r++){
        for (int e=0; e<10; e++) count[e]=0;      // reset per row
        for (int c=0; c<9; c++) count[arr[r][c]]++;
        if (!check(count)) ans=0;
    }

    // columns
    for (int c=0; c<9 && ans; c++){
        for (int e=0; e<10; e++) count[e]=0;      // reset per column
        for (int r=0; r<9; r++) count[arr[r][c]]++;
        if (!check(count)) ans=0;
    }

    // 3x3 boxes
    for (int y=0; y<3 && ans; y++){
        for (int x=0; x<3 && ans; x++){
            for (int e=0; e<10; e++) count[e]=0;  // reset per box
            for (int r=3*y; r<3*y+3; r++)
                for (int c=3*x; c<3*x+3; c++)
                    count[arr[r][c]]++;
            if (!check(count)) ans=0;
        }
    }
    return ans;
    }
private: 
    bool check(int count[]){
        for (int i=1; i<10; i++){
            if (count[i]>1) return false;
        }
        return true;
    }
};