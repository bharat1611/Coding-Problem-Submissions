#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) 
    {
        if(nums.size() == 0 || nums.size() == 1) return 0;
        vector<int> copy = nums;                      // vector copy to copy value of nums
        int index1, index2;
        sort(copy.begin(), copy.end());                // sort vector copy
        for(int i = 0 ; i < nums.size(); i++)           // find from start where value of copy and nums differ
        {
            if(nums[i] != copy[i]){
                index1 = i;                     // store it in index1
                break;
            }
        }
        
        if(index1 >=nums.size() - 1) return 0;  // if index1 is equal to original size means array is sorted
        for(int i = nums.size() - 1 ; i >= 0; i--)
        {
            if(nums[i] != copy[i])              // find from end where value of copy and nums differ
            {
                index2 = i;                     // store it in index2
                break;
            }
        }
        return index2-index1 + 1;           // return their difference
    }
};