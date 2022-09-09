class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>>dp(grid);
        for(int i = 0 ; i < m; i++)
        {
            for(int j = 0 ; j < n; j++)
            {
                if(i > 0 and j > 0)
                    dp[i][j] += min(dp[i - 1][j], dp[i][j - 1]);
                else if(i == 0 and j > 0)
                    dp[i][j] += dp[i][j - 1];
                else if(j == 0 and i > 0)
                    dp[i][j] += dp[i - 1][j];
            }
        }
        return dp[m - 1][n - 1];
    }
};