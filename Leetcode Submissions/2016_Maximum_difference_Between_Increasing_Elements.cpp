class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int min_traverse = nums[0];
        int ans = INT_MIN;
        for(int i = 1 ; i < nums.size(); i++)
        {
            min_traverse = min(min_traverse, nums[i]);
            if(nums[i - 1] < nums[i])
            {
                ans = max(ans, nums[i] - min_traverse);
            }
        }
        return (ans == INT_MIN ? -1 : ans);
    }
};