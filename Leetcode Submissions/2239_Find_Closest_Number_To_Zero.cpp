#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int min = INT_MAX;
        int ans = 0;
        
        for(int i = 0 ; i < nums.size();i++)
        {
            if(abs(nums[i]) <= min)
            {
                min = abs(nums[i]);
                ans = nums[i];
            }
        }
        return ans;
    }
};


class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        
        int min_p = INT_MAX, min_n = INT_MIN;
        
        for(int i = 0 ; i < nums.size();i++)
        {
            if(nums[i] > 0)
            {
                if(nums[i] < min_p)
                    min_p = nums[i];
            }
            else
            {
                if(nums[i] > min_n)
                    min_n = nums[i];
            }
        }
        if(min_p == INT_MAX)
            return min_n;
        if(min_n == INT_MIN)
            return min_p;
        
        return abs(min_p) <= abs(min_n) ? min_p : min_n;
    }
};