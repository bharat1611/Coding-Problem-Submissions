class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int n = nums.size();
        if(n == 1)
            return true;
        
        int max = 0;
        for(int i = 0 ; i < n; i++)
        {
            if(nums[i] + i > max)
                max = nums[i] + i;
            if(max == i)
                break;
        }
        if(max >= n - 1)
            return true;
        
        return false;
        
    }
};