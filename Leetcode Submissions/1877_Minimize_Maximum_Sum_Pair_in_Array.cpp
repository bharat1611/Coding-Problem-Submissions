class Solution {
public:
    int minPairSum(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        int i = 0, j = nums.size() - 1;
        int max_sum = 0;
        while(i <= j)
        {
            int sum = nums[i] + nums[j];
            max_sum = max(max_sum, sum);
            i++;
            j--;
        }
        return max_sum;
    }
};