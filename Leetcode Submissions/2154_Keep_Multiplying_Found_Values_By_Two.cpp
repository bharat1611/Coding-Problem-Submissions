#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int prev_org = 0;
        
        while(1)
        {
            prev_org = original;
            for(int i = 0 ; i < nums.size(); i++)
            {
                if(original == nums[i])
                {
                    original = 2 * original;
                }
            }
            if(prev_org == original)
                break;
        }
        return original;
    }
};