#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        if(nums.size() == 1 && nums[0] == k)
            return 1;
        sort(nums.begin(), nums.end());             // sort the vector
        int count = 0;                              // count the number of pairs
        int i = 0, j = nums.size() - 1;             // two pointer approach
        while(i < j)
        {
            if(nums[i] + nums[j] == k)              // if found equal, increment count and shift pointers
            {
                ++count;
                i++;
                j--;
            } 
            else if(nums[i] + nums[j] > k)          // if sum is greater than k, then decremenet end pointer
                j--;
            else if(nums[i] + nums[j] < k)          // if sum is smaller than k, increment start pointer
                i++;
        }
        return count;                               // return count
    }
};