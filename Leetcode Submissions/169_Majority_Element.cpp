#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int maj = nums.size()/2, count = 0, index = 0;
        for(int i = 0 ; i < nums.size() - 1; i++)
        {
            if(nums[i] == nums[i + 1])
            {
                index = i;
                count++;
            }
            if(count >= maj)
                break;
        }
        return nums[index];
    }
};