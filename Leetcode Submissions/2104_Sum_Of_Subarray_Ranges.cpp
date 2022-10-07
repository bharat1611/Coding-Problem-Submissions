class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int min_e = nums[0], max_e = nums[0];
        long long sum = 0;
        int n = nums.size();
        for(int i = 0 ; i < n; i++)
        {
            min_e = nums[i];
            max_e = nums[i];
            for(int j = i ; j < n; j++)
            {
                min_e = min(min_e, nums[j]);
                max_e = max(max_e, nums[j]);
                sum += (max_e - min_e);
            }
        }
        return sum;
    }
};