#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int n = nums.size(),num = 0;
        int diff[n];
        
        for(int i = 0; i<nums.size(); i++)
            diff[i] = nums[i] - n;
        
        
        sort(diff, diff + n);
        
        for(int i = 1; i< n;i++ )
        {
            if(diff[i] == diff[i-1])
                num = diff[i-1] + n;
        }
        return num;
    }
};