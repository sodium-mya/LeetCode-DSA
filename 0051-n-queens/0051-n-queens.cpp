class Solution {
public:
    int pos[14];
    int n;
    vector<vector<string>> sol;
    vector<vector<string>> solveNQueens(int N){
        n=N;
        Queens(1);
        return sol;
    }
    void Queens(int col) {
        if (col > n){   
            vector<string> ans;
            string elt = "";
            for (int x=0; x<n; x++){
                elt+='.';
            }
            for (int y=0; y<n; y++){
                ans.insert(ans.begin(), elt);
            }                
            for (int c=1; c<=n; c++){
                ans[pos[c]-1][c-1]='Q';
            }
            sol.push_back(ans);
            return;
        }
        for (int row=1; row<=n; row++){
            if (safe(col,row)){
                pos[col] = row;
                Queens(col+1);
            }
        }
    }        
private:
    bool safe(int col, int row){
        for (int c=1; c<col; c++){
            if (pos[c]==row) return false;                  // same row
            if (abs(pos[c]-row) == col-c) return false;     // same diagonal
        }
        return true;
    }
};