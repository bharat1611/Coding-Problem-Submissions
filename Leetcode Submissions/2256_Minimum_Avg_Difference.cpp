class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int min_avg = INT_MAX, min_idx = 0;
        long long int sum_total = 0;
        for(int i = 0 ; i < nums.size(); i++)
        {
            sum_total += nums[i];
        }
        long long int r_sum = 0;
        int start = 0, end = 0;
        int r_idx = 1, n = nums.size();
        for(int i = 0 ; i < n; i++)
        {
            r_sum += nums[i];
            start = r_sum/r_idx;
            if(n - r_idx == 0)
                end = 0;
            else
                end = (sum_total - r_sum)/(n - r_idx);
            r_idx++;
            if(abs(start - end) < min_avg){
                min_avg = abs(start - end);
                min_idx = i;                
            }
        }
        return min_idx;
    }
};