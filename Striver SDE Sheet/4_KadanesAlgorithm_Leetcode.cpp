//O(N) with O(N) space
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> dp(nums);
        int ans = nums[0];
        for(int i = 1 ; i < nums.size(); i++){
            dp[i] = max(dp[i], dp[i - 1] + nums[i]);
            ans = max(ans, dp[i]);
        }
        return ans;   
    }
};

//O(N) with O(1) space
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

// O(n^2)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int max_sum = INT_MIN;

        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = i; j < n; j++) 
            {
                sum += nums[j];
                max_sum = max(max_sum, sum);
            }
        }
        return max_sum;
    }
};
