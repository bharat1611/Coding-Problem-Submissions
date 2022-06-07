class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l = 0, r = nums.size() - 1, i = nums.size() -1;
        vector<int>ans(nums.size());
        while(l <= r)
        {
            if(abs(nums[l]) <= abs(nums[r]))
            {
                ans[i] = abs(nums[r]*nums[r]);
                r--;
            }
            else if(abs(nums[l]) > abs(nums[r])){
                ans[i] = abs(nums[l]*nums[l]);
                l++;
            }
            i--;
        }
        return ans;
    }
};

// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& nums) {
        
//         for(int i = 0 ; i < nums.size(); i++)
//             nums[i] = abs(nums[i]);
//         sort(nums.begin(), nums.end());
//         for(int i = 0 ; i < nums.size(); i++)
//             nums[i] = pow(nums[i], 2);
//         return nums;
//     }
// };