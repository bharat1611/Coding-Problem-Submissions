class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        vector<int> dp(nums.size(),0);
        dp[0] = nums[0];
        unordered_map<int, int> mp;
        for(int i = 1 ; i < nums.size(); i++)
        {
            dp[i] = nums[i] + dp[i - 1];
        }
        int count = 0;
        for(int i = 0 ; i < dp.size(); i++)
        {
            if(dp[i] == k)
                count++;
            if(mp.find(dp[i] - k) != mp.end())
                count += mp[dp[i] - k];
            mp[dp[i]]++;
        }
        return count;
    }
};