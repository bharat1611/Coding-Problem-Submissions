#define MOD 1000000007
class Solution {
public:
    // RECURSION
    
    long long solve(int dice, int faces, int target)
    {
        if(target < 0)
            return 0;
        if(dice == 0 and target != 0)
            return 0;
        if(target == 0 and dice != 0)
            return 0;
        if(dice == 0 and target == 0)
            return 1;
        long long ans = 0;
        for(int i = 1; i <= faces; i++)
        {
            ans = ans + solve(dice - 1, faces, target - i);
        }
        return ans;
    }

    // TOP DOWN DP
    
    long long solve(int dice, int faces, int target, vector<vector<long long>> &dp)
    {
        if(target < 0)
            return 0;
        if(dice == 0 and target != 0)
            return 0;
        if(target == 0 and dice != 0)
            return 0;
        if(dice == 0 and target == 0)
            return 1;
        if(dp[dice][target] != -1)
            return dp[dice][target];
        long long ans = 0;
        for(int i = 1; i <= faces; i++)
        {
            ans = (ans + solve(dice - 1, faces, target - i, dp))%MOD;
        }
        return dp[dice][target] = ans;
    }
    
    
    // BOTTOM UP DP
    long long solve(int d, int f, int t)
    {
        vector<vector<long long>> dp(d + 1, vector<long long>(t + 1, 0));
        // analysing base case
        dp[0][0] = 1;
        for(int dice = 1; dice <= d; dice++)
        {
            for(int target = 1; target <= t; target++)
            {
                long long ans = 0;
                for(int i = 1; i <= f; i++)
                {
                    if(target - i >= 0)
                        ans = (ans + dp[dice - 1][target - i])%MOD;
                }
                dp[dice][target] = ans;
            }
        }
        return dp[d][t];
    }

    
    // SPACE OPTIMISATION
    long long solve(int d, int f, int t)
    {
        vector<long long> prev(t + 1, 0);
        vector<long long> curr(t + 1, 0);
        // analysing base case
        prev[0] = 1;

        for(int dice = 1; dice <= d; dice++)
        {
            for(int target = 1; target <= t; target++)
            {
                long long ans = 0;
                for(int i = 1; i <= f; i++)
                {
                    if(target - i >= 0)
                        ans = (ans + prev[target - i])%MOD;
                }
                curr[target] = ans;
            }
            prev = curr;
            
        }
        return prev[t];
    }
    
    int numRollsToTarget(int n, int k, int target) {
        // vector<vector<long long>> dp(n + 1, vector<long long>(target + 1, -1));
        // return solve(n, k, target dp);
        return solve(n, k, target);
    }
};