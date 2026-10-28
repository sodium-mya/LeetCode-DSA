class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        solved = false;
        sudoku(board, 0, 0);
    }
private:
    bool solved;
    void sudoku(vector<vector<char>>& board, int r, int c){
        if (r==9){
            solved = true;
            return;
        }
        if (board[r][c]=='.'){
            for (int i=1; i<10; i++){
                if (check(board, r, c, i+48)){
                    board[r][c]= i+48;
                    if (c<8) sudoku(board, r, c+1);
                    else sudoku(board, r+1, 0);
                    if (solved) return;
                }
            }
            board[r][c]= '.';
        }
        else {
            if (c<8) sudoku(board, r, c+1);
            else sudoku(board, r+1, 0);
        }
    }
    bool check(vector<vector<char>>& board, int r, int c, char i){
        for (int j=0; j<9; j++){
            if (board[r][j]==i) return false;
        }
        for (int j=0; j<9; j++){
            if (board[j][c]==i) return false;
        }
        int x=r/3, y=c/3;
        for (int p=3*x; p<3*x+3; p++){
            for (int q=3*y; q<3*y+3; q++){
                if (board[p][q]==i) return false;
            }
        }
        return true;
    }
};