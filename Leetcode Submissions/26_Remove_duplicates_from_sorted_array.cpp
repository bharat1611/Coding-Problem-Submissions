#include <iostream>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int n = nums.size();
        if(nums.size() == 0)
            return 0;
        int k = 1;
        
        for(int i = 1;i < nums.size(); i++)
        {
            if(nums[i-1] != nums[i])
            {
                nums[k] = nums[i];
                ++k;
            }
        }
        return k;
        
    }
};