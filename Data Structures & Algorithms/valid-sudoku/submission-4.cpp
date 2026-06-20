class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for(int i = 0; i < 9; i++)
        {
            if(!(checkHor(board,i) && checkvert(board,i)  && checkbox(board,i/3*3,(i%3 *3))))
            {
                return false;
            }
        }
        return true;
    }
    bool checkHor(vector<vector<char>>& board, int row)
    {
        unordered_set<char> hs;
        for(int i = 0; i < 9; i++)
        {
            if(hs.count(board[row][i]) && board[row][i] != '.')
            {
                return false;
            }
            hs.insert(board[row][i]);
        }
        return true;
    }
    bool checkvert(vector<vector<char>>& board, int col)
    {
        unordered_set<char> hs;
        for(int i = 0; i < 9; i++)
        {
            if(hs.count(board[i][col]) && board[i][col] != '.')
            {
                return false;
            }
            hs.insert(board[i][col]);
        }
        return true;
    }
    bool checkbox(vector<vector<char>>& board, int row, int col)
    {
        unordered_set<char> hs;
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                if(hs.count(board[i+row][j+col]) && board[i+row][j+col] != '.')
                {
                    return false;
                }
                hs.insert(board[i+row][j+col]);
            }
        }
        return true;
    }
};
