class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int ans = 1;
        int curr = 1;
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i] > nums[i - 1])
                curr++;
            else
            {
                ans = max(curr, ans);
                curr = 1;
            }
        }
        return max(ans, curr);
    }
};