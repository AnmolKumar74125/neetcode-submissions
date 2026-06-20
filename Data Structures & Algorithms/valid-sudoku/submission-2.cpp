class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        vector<bool> rval;
        vector<bool> cval;
        vector<bool> bval;

        for(int i = 0; i < 9; i++)
        {
            cout<<" i = "<< i<<endl;
            if(!(checkHor(board,i) && checkvert(board,i)  && checkbox(board,i/3*3,(i%3 *3))))
            {
                return false;
            }
        }
        return true;
    }
    bool checkHor(vector<vector<char>> board, int row)
    {
        unordered_set<char> hs;
        for(int i = 0; i < 9; i++)
        {
            if(hs.count(board[row][i]) && board[row][i] != '.')
            {
                cout << "A "<<endl;
                return false;
            }
            hs.insert(board[row][i]);
        }
        return true;
    }
    bool checkvert(vector<vector<char>> board, int col)
    {
        unordered_set<char> hs;
        for(int i = 0; i < 9; i++)
        {
            if(hs.count(board[i][col]) && board[i][col] != '.')
            {
                cout << "B "<<endl;
                return false;
            }
            hs.insert(board[i][col]);
        }
        return true;
    }
    bool checkbox(vector<vector<char>> board, int row, int col)
    {
        cout<<"row = "<<row <<". col = "<<col<<endl;
        unordered_set<char> hs;
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                cout<< "i+row =" <<i+row <<" j+col = "<<j+col<<endl;
                cout<<"board[i+row][j+col] = "<<board[i+row][j+col]<<endl;
                if(hs.count(board[i+row][j+col]) && board[i+row][j+col] != '.')
                {

                    cout << "C "<<endl;
                    return false;
                }
                hs.insert(board[i+row][j+col]);
            }
        }
        return true;
    }
};
