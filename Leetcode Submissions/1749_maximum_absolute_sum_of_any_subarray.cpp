class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxsum = 0, sum = 0, minsum = 0;
        for(int i = 0 ; i < nums.size(); i++)
        {
            sum += nums[i];
            maxsum = max(maxsum, sum);
            if(sum < 0)
                sum = 0;
        }
        sum = 0;
        for(int i = 0 ; i < nums.size(); i++)
        {
            sum += nums[i];
            minsum = min(minsum, sum);
            if(sum > 0)
                sum = 0;
        }
        return max(abs(minsum), maxsum);
    }
};