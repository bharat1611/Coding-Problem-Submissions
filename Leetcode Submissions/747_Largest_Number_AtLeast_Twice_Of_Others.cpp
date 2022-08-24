#include <iostream>
using namespace std;

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        
        int max = INT_MIN;
        int index = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(max <= nums[i]){
                max = nums[i];
                index = i;
            }
        }
        
        for(int i = 0 ; i < nums.size(); i++)
        {
            if(i != index)
            {
                if(2*nums[i] > max){
                    return -1;
                }
            }
        }
        return index;
    }
};