class Solution {
public:
    void dfs(vector<vector<char>> &grid, int i, int j)
    {
        if(i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] != 'O')
            return;
        grid[i][j] = '#';
        dfs(grid, i + 1, j);
        dfs(grid, i, j + 1);
        dfs(grid, i, j - 1);
        dfs(grid, i - 1, j);
    }
    
    void solve(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();
        for(int i = 0 ;i < m; i++){
            for(int j = 0 ; j < n; j++){
                if(i == 0 || i == m - 1 || j == 0 || j == n - 1)
                {
                    if(board[i][j] == 'O')
                        dfs(board, i, j);
                }
            }
        }
        for(int i = 0 ;i < m; i++){
            for(int j = 0 ; j < n; j++)
            {
                if(board[i][j] == 'O')
                    board[i][j] = 'X';
                if(board[i][j] == '#')
                    board[i][j] = 'O';
            }
        }  
    }
};