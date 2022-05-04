#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int binary_search(vector<int> nums, int lb, int ub, int target)
    {
        int mid = 0;
        while(lb <= ub)                 // performing binary search
        {
            mid = ub - (ub - lb)/2;
            if(nums[mid] == target)
                return mid;
            if(nums[mid] < target)
                lb = mid + 1;
            else
                ub = mid - 1;
        }
        return -1;                      // return -1 if element not found
    }
    
    int search(vector<int>& nums, int target) 
    {
        int index = nums.size() - 1;        // set index to last element of the array(incase no pivot point found)
        for(int i = 0 ; i < nums.size() - 1; i++)
            if(nums[i] > nums[i + 1]){
                index = i;                  // if pivot found, then change index to pivot
                break;                      // break
            }
        int p1 = binary_search(nums, 0, index, target);       // perform binary search on first half
        if(p1 == -1)                                // if element not found, only then search in 2nd half
            return binary_search(nums, index, nums.size() - 1, target);
        else
            return p1;                              // else return p1(index if element is found)
    }
};