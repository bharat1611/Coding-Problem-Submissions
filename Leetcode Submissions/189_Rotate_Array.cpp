#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        vector<int> v(nums.size(), 0);
        
        if(k == 0 ||  nums.size() == 1)
            cout << "Do Nothing" ;
            
        else   
        {
            int start = 0;
            if(k != 1 and v.size() % k == 0)
                cout << "Do Nothing";
            
            if(k < nums.size())
                start = nums.size() - k;
            if(k > nums.size())
                start = nums.size() - k % (nums.size());
            int original = start;
            int i = 0;
            do
            {
                v[i] = nums[start];
                start++;
                i++;
                if(start == nums.size())
                    start = 0;
            }
            while(start != original);

            for(int i = 0 ; i < nums.size(); i++)
                nums[i] = v[i];
            }
    }
};