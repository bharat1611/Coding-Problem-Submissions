#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isMonotonic(vector<int>& nums)
    {
        int i = 0;
        bool f1 = true, f2 = true;              // taking 2 counters as f1 and f2
        for(int i = 0; i < nums.size() - 1; i++)        
        {
            if(nums[i] > nums[i + 1])           // checking if the array is monotone increaasing
                f1 = false;
            if(nums[i] < nums[i + 1])           // checking if array is monotone decreasing
                f2 = false;
        }
        return f1 || f2;                    // if both f1 and f2 are false, means neither M.inc nor M.decreaing
        
    }
};