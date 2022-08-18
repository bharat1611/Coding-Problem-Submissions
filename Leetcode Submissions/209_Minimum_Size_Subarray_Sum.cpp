class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int low = 0, curr_len = 0, min_l = INT_MAX;
        long long sum = 0;
        int n = nums.size();
        int i = 0;
        
        while(i < n)
        {
            sum += nums[i];
            while(sum >= target)
            {
                curr_len = i - low + 1;
                min_l = min(min_l, curr_len);
                sum = sum - nums[low];
                low++;
            }
            i++;
            
            if(low == i)
                return 1;
        }
        
        if(min_l == INT_MAX)
            return 0;
        return min_l;
        
    }
};