class Solution {
public:
    // Recursion - TLE
    int solveMem(vector<int> &s, int index, int time)
    {
        if(index >= s.size())
            return 0;
        int include = s[index] * time + solve(s, index + 1, time + 1);
        int exclude = solve(s, index + 1, time);
        return max(include, exclude);
    }
    
    // Memoisation - Accepted
    
    int solveMem(vector<int> &s, int index, int time, vector<vector<int>> &dp)
    {
        if(index >= s.size())
            return 0;
        if(dp[index][time] != -1)
            return dp[index][time];
        int include = s[index] * time + solve(s, index + 1, time + 1, dp);
        int exclude = solve(s, index + 1, time, dp);
        dp[index][time] = max(include, exclude);
        return dp[index][time];
        
    }
    
    int solveTab(vector<int> &s)
    {
        
    }
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(), satisfaction.end());
        // return solve(satisfaction, 0, 1);
        vector<vector<int>> dp(501, vector<int>(501, -1));
        return solveMem(satisfaction, 0, 1, dp);
    }
};