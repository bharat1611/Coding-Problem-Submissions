class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans = 0;
        for(int i = 0 ; i < nums.size() - 1; i = i + 2)
        {
            int curr_min = min(nums[i], nums[i + 1]);
            ans += curr_min;
        }
        return ans;
    }
};