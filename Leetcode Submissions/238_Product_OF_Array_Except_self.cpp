class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int left = 1;
        vector<int> ans(nums.size(), 1);
        for(int i = 0 ;i < nums.size(); i++)
        {
            ans[i] = left;
            left *= nums[i];
        }
        for(auto i : ans)
            cout << i << " ";
        int right = 1;
        for(int i = nums.size() - 1; i >=0 ; i--)
        {
            ans[i] *= right;
            right *= nums[i];
        }
        return ans;
    }
};