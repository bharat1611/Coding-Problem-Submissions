class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        return __gcd(nums[n - 1], nums[0]);
    }
};