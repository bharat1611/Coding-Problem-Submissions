class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 0);
        for(int i = 1; i < n; i++)
            ans[0] += (nums[i] - nums[0]);
        
        for(int i = 1; i < nums.size(); i++)
        {
            ans[i] += ans[i - 1] + (nums[i] - nums[i - 1])*(i) - (nums[i] - nums[i - 1])*(n - i);
        }
        return ans;
    }
};