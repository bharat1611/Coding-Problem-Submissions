#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums)
    {
        if(nums.size() == 0 || nums.size() == 1)        // if null, or 1 size, return
            return nums;
        int i = 0, j = nums.size() - 1;                 // two pointer approach
        while(i < j)
        {
            if((nums[i] & 1) == 0)                      // if left is even, increment left ptr
                i++;    
            else if((nums[j] & 1 == 1))                 // if right is odd, decrement right ptr
                j--;
            else if((nums[i] & 1) == 1 && (nums[j] & 1) == 0)   // if left = odd, right even, swap
                swap(nums[i++], nums[j--]);             // increment left and decrement right 
        }
        return nums;                                    // return nums
    }
};