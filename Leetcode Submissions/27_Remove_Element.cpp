
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int n = nums.size();
        int count = 0;                         //to count the values to be removed
        for(int i = 0; i < n - count; i++)
        {
            if(nums[i] == val)                  // if val is found in the vector
            {
                nums.erase(nums.begin() + i);   // erase the element from the vector
                count ++ ;                      // increment count by 1
                i--;                            // decremeent i by 1, to avoid missing an element in between
            }
        }
        return (n - count);                     // return the original size - removed elements
    }
};