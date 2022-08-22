class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m = board.size();
        int n = board[0].size();
        int pos[8][2] = {{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
        
        vector<vector<int>> copy(m, vector<int>(n, 0));
        
        for(int i = 0 ; i < m ;i++)
        {
            for(int j = 0 ; j < n; j++)
            {
                int count = 0;
                for(int k = 0; k < 8; k++)
                {
                    int row = i + pos[k][0];
                    int col = j + pos[k][1];
                    if(row >= 0 and col >= 0 and row < m and col < n and board[row][col] == 1)
                        count++;
                }
                if(board[i][j] == 1)
                {
                    if(count == 2 || count == 3)
                        copy[i][j] = 1;
                }
                else
                    if(count == 3)
                        copy[i][j] = 1;
            }  
        }
        
        for(int i = 0 ; i < m ;i++)
        {
            for(int j = 0 ; j < n; j++)
            {
                board[i][j] = copy[i][j];
            }
         }
    }
};