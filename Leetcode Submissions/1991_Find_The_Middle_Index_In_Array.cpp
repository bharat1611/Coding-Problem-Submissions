class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int total_sum = 0, curr_sum = 0;
        for(auto i : nums)
            total_sum += i;
        
        for(int i = 0 ; i < nums.size(); i++)
        {
            if(curr_sum == total_sum - curr_sum - nums[i])
                return i;
            curr_sum += nums[i];
        }
        return -1;
    }
};