#include <vector>
using namespace std;

class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
private:
    bool solve(vector<vector<char>>& board) {
       for(int row=0;row<9;row++){
            for(int col = 0;col<9;col++){
              if(board[row][col]=='.'){
                    for(char digit='1';digit<='9';digit++){
                        if(isvalid(board,row,col,digit)){
                              board[row][col] = digit;
                              if(solve(board)){
                                  return true;
                              } 
                              board[row][col] = '.';
                        }
                    }
                    return false;
                }      
            }
       }
       return true;
    }

    bool isvalid(vector<vector<char>>& board, int row, int col, char digit) {
        for(int i=0;i<9;i++){
            if(board[row][i]==digit || board[i][col]==digit){
                return false;
            }
            int boxrow = 3*(row/3) + (i/3);
            int boxcol = 3*(col/3) + (i%3);
            if(board[boxrow][boxcol]==digit){
                return false;
            }
        }
        return true;
    }
};
