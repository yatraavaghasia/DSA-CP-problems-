class Solution {
public:
bool isValid(vector<vector<char>>& board,int row, int col, char c)
{
    for(int i=0;i<9;i++)
    {
        if(board[row][i]==c)
        return false;

        if(board[i][col]==c)
        return false;

        if(board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3]==c)
        return false;
    }
    return true;
}
bool solve(vector<vector<char>>& board)
{
    int n=board.size();
        int i,j;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(board[i][j]=='.')
                {
                    for(char c='1';c<='9';c++)
                    {
                        if(isValid(board,i,j,c))
                        {
                            board[i][j]=c;

                            if(solve(board)==true)
                            return true;
                            else
                            board[i][j]='.';
                        }
                    }
                    return false;
                }

            }
        }
        return true;
}
    void solveSudoku(vector<vector<char>>& board) {
        bool ans;
        ans = solve(board);
    }
};
