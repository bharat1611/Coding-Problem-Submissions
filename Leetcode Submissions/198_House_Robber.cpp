class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 1)
            return nums[0];
        if(nums.size() == 2)
            return max(nums[0], nums[1]);
        vector<int>v(nums.size());
        v[0] = nums[0];
        v[1] = nums[1];
        v[2] = nums[0] + nums[2];
        for(int i = 3; i < nums.size(); i++)
        {
            v[i] = max(v[i - 2], v[i - 3]) + nums[i];
        }
        return max(v[nums.size() - 1], v[nums.size() - 2]);
    }
};