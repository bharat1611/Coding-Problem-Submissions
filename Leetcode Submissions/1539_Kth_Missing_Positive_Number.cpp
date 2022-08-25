#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int missing = 1;
        
        for(int i = 0 ; i < arr.size(); i++)
        {
            if(arr[i] != missing)
            {
                i--;
                k--;
            }
            if(k == 0)
                return missing;
            
            missing++;
        }
        return missing + (k - 1);
        
    }
};