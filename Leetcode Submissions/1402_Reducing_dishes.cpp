
class Solution {
public:
    
    int solve(vector<int> &s, int index, int time, vector<vector<int>> &dp)
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
    int maxSatisfaction(vector<int>& satisfaction) {
        
        
        sort(satisfaction.begin(), satisfaction.end());
        vector<vector<int>> dp(501, vector<int>(501, -1));
        return solve(satisfaction, 0, 1, dp);
    }
};