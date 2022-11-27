// Recursion - 0ms
class Solution {
public:
    int solve(vector<int> &nums, int i, int diff)
    {
        if(i == nums.size() - 1 || nums[i] + diff != nums[i + 1])
            return 0;
        
        return 1 + solve(nums, i + 1, diff);   
    }
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size() < 3)
            return 0;
        int ans = 0;
        for(int i = 0 ; i < nums.size() - 2; i++)
        {
            int diff = nums[i + 1] - nums[i];
            ans += solve(nums, i + 1, diff);
        }
        return ans;
    }
};

// DP + Memoisation 
class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size() < 3)
            return 0;
        vector<int> dp(nums.size(), 0);
        int ans = 0;
        for(int i = 2 ; i < nums.size(); i++)
        {
            if(nums[i] - nums[i - 1] == nums[i - 1] - nums[i - 2])
            {
                dp[i] = 1 + dp[i - 1];
                ans += dp[i];
            }
        }
        return ans;
    }
};

// DP + Tabulation
class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size() < 3)
            return 0;
        int ans = 0;
        int curr= 0;
        for(int i = 2 ; i < nums.size(); i++)
        {
            if(nums[i] - nums[i - 1] == nums[i - 1] - nums[i - 2])
            {
                curr++;
                ans += curr;
            }
            else
                curr = 0;
        }
        return ans;
    }
};


