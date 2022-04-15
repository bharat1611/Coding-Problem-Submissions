#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int ub = nums.size() - 1, lb = 0, mid = 0;
        while(lb <= ub)
        {
            mid = lb + (ub - lb)/2;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] < target)
                lb = mid + 1;
            else
                ub = mid - 1;
        }
        return lb;
    }
};
