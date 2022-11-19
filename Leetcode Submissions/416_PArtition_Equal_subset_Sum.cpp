class Solution {
public:
    // TLE
    bool solve(int index, vector<int>&nums, int target)
    {
        if(index >= nums.size())
            return 0;
        if(target< 0)
            return 0;
        if(target == 0)
            return 1;
        bool include = solve(index + 1, nums, target - nums[index]);
        bool exclude = solve(index + 1, nums, target);
        return include or exclude;
    }
    
    // MEMOISATION
    bool solveMem(int index, vector<int> &nums, vector<vector<int>> &dp, int target)
    {
        if(index >= nums.size())
            return 0;
        if(target< 0)
            return 0;
        if(target == 0)
            return 1;
        if(dp[index][target] != -1)
            return dp[index][target];
        bool include = solveMem(index + 1, nums,dp, target - nums[index]);
        bool exclude = solveMem(index + 1, nums, dp,  target);
        return dp[index][target] = include or exclude;
    }
    
    // TABULATION
    bool solveTab(vector<int> &nums, int t)
    {
        vector<vector<int>> dp(nums.size() + 1, vector<int> (t + 1, 0));
        
        for(int i = 0 ; i <= nums.size(); i++)
            dp[i][0] = 1;
        
        for(int index = nums.size() - 1; index >= 0; index--)
        {
            for(int target = 0; target <= t; target++)
            {
                int include = 0;
                if(target - nums[index] >= 0)
                    include = dp[index + 1][target - nums[index]];
                int exclude = dp[index + 1][target];
                
                dp[index][target] = include or exclude;
            }
        }
        return dp[0][t];
        
    }
    bool canPartition(vector<int>& nums) {
        
        int total = 0;
        for(int i = 0 ; i < nums.size(); i++)
            total += nums[i];
        if((total&1) == 1)
            return false;
        int target = total/2;
        vector<vector<int>> dp(nums.size() + 1, vector<int>(target + 1, -1));
        // return solve(0, nums, target);
        // return solveMem(0, nums, dp, target);
        return solveTab(nums, target);
    }
};