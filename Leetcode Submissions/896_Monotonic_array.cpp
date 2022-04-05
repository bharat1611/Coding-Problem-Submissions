#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isMonotonic(vector<int>& nums)
    {
        int n = nums.size() - 1, i = 0;
        bool f1 = true, f2 = true;
        while(i < n)
        {
            if(nums[i] > nums[i+1])
                f1 = false;
            i++;
        }
        while(n >= 1)
        {
            if(nums[n -1] < nums[n])
                f2 = false;
            n--;
        }
        if(f1 || f2)
            return true;
        
        return false;
        
    }
};
