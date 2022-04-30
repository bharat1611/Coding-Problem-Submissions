#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countOnes(int n)            //function to check the number of 1's
    {
        int count = 0;
        while(n != 0)               // loop till n is 0
        {   
            if((n&1))               // check the last bit of the number
                count++;            // if 1 then add 1
            n >>= 1;                // right shift n to 1
        }
        return count;               // return count
    }
    vector<int> countBits(int n)
    {
        vector<int> ans;            // vector to store the answer
        for(int i = 0; i <= n; i++)
        {
            ans.push_back(countOnes(i));        // pass every number to count the number of bits
        }
        return ans;                 // return vector ans
    }
};