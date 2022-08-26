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