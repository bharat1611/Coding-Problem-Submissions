class Solution {
public:
    int minimumOperations(string nums) {
        bool zero = false;
        bool five = false;
        
        for(int i = nums.size() - 1; i >= 0; i--)
        {
            if(zero and nums[i] == '0')
                return nums.size() - 2 - i;
            if(zero and nums[i] == '5')
                return nums.size() - 2 - i;
            if(five and nums[i] == '2')
                return nums.size() - 2 - i;
            if(five and nums[i] == '7')
                return nums.size() - 2 - i;
            
            if(nums[i] == '0')
                zero = true;
            if(nums[i] == '5')
                five = true;
        }
        if(zero == true)
            return nums.size() - 1;
        
        return nums.size();
        
    }
};