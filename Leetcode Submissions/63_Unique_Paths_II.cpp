class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        if(obstacleGrid[0][0] == 1)
            return 0;
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<vector<int>> dp(m, vector<int> (n));
        dp[0][0] = 1;
        for(int i = 0 ; i < m; i++)
        {
            for(int j = 0 ; j < n; j++)
            {
                if(obstacleGrid[i][j] == 1){
                    dp[i][j] = 0;
                    continue;
                }
                if(i == 0 and j == 0)
                    continue;
                else if(i == 0 and j != 0)
                    dp[i][j] = dp[i][j - 1];
                else if(j == 0 and i != 0)
                    dp[i][j] = dp[i - 1][j];
                else
                    dp[i][j] = dp[i][j - 1] + dp[i -1][j];
            }
        }
        return dp[m - 1][n - 1];
    }
};