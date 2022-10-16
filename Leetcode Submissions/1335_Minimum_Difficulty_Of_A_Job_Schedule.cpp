class Solution
{
public:
    int minDifficulty(vector<int> &jobDifficulty, int d)
    {

        int n = jobDifficulty.size();
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(d + 1, vector<int>(1001, -1)));

        int ans = helper(jobDifficulty, 0, d, -1, dp);
        return ans == INT_MAX ? -1 : ans;
    }

    int helper(vector<int> &jobDifficulty, int i, int d, int mx, vector<vector<vector<int>>> &dp)
    {
        if (i >= jobDifficulty.size())
            return d == 0 ? 0 : INT_MAX;

        if (d == 0)
            return INT_MAX;

        mx = max(mx, jobDifficulty[i]);
        if (dp[i][d][mx] != -1)
            return dp[i][d][mx];

        long ans = helper(jobDifficulty, i + 1, d, mx, dp);
        if (d > 0)
            ans = min(ans, helper(jobDifficulty, i + 1, d - 1, -1, dp) + (long)mx);

        return dp[i][d][mx] = ans;
    }
};