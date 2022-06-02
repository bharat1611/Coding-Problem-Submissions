class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int max_curr = nums[0], max_all = nums[0];
        for(int i = 1; i < n ;i++)
        {
            max_curr = max(nums[i], max_curr + nums[i]);
            max_all = max(max_curr, max_all);
        }
        return max_all;
    }
};