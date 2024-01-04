// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//     //     vector<int> dp(nums);
//     //     int ans = nums[0];
//     //     for(int i = 1 ; i < nums.size(); i++){
//     //         dp[i] = max(dp[i], dp[i - 1] + nums[i]);
//     //         ans = max(ans, dp[i]);
//     //     }
//     //     return ans;   
//     // }
// };

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int ans = nums[0];
        for(int i = 0 ; i< nums.size(); i++){
            sum += nums[i];
            if(sum > ans)
                ans = sum;
            
            if(sum < 0)
                sum = 0;
        }
        return ans;
    }
};

