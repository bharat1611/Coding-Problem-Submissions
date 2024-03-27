class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        long long product = 1;
        int start = 0, end = 0, ans = 0;
        
        while(start < n && end < n){
            product *= nums[end];
            while(start <= end && product >= k)
            {
                product = product/nums[start];
                start++;
            }
            ans += end - start + 1;
            end++;
        }
        return ans;
    }
};