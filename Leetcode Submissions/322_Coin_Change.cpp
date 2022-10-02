class Solution {
public:
    int recursion(vector<int>&coins, int target)
    {
        if(target == 0)
            return 0;
        if(target < 0)
            return INT_MAX;
        int mini = INT_MAX;
        for(int i = coins.size() - 1; i >= 0; i--)
        {
            int ans = recursion(coins, target - coins[i]);
            if(ans != INT_MAX)
                mini = min(mini,1 + ans);
        }
        return mini;
    }
    
    
    int solveMem(vector<int>&coins, int target, vector<int> &dp)
    {
        if(target == 0)
            return 0;
        if(target < 0)
            return INT_MAX;
        if(dp[target] != -1)
            return dp[target];
        int mini = INT_MAX;
        for(int i = coins.size() - 1; i >= 0; i--)
        {
            int ans = solveMem(coins, target - coins[i], dp);
            if(ans != INT_MAX)
                mini = min(mini,1 + ans);
        }
        dp[target] = mini;
        return mini;
    }
    
    int solveTab(vector<int>&coins, int target)
    {
        vector<int> dp(target + 1, INT_MAX);
        dp[0] = 0;
        for(int i = 1; i <= target; i++)
        {
            for(int j = 0; j < coins.size(); j++)
            {
                if(i - coins[j] >= 0 and dp[i - coins[j]] != INT_MAX)
                    dp[i] = min(dp[i], 1 + dp[i - coins[j]]);
            }
        }
        if(dp[target] == INT_MAX)
            return -1;
        return dp[target];   
    }
    
    int coinChange(vector<int>& coins, int target) {
        int ans = recursion(coins, target);
        if(ans == INT_MAX)
            return -1;
        return ans;
        
        
        vector<int> dp(target + 1, -1);
        int ans = solveMem(coins, target, dp);
        if(ans == INT_MAX)
            return -1;
        
        
        return solveTab(coins, target);
        
    }
};