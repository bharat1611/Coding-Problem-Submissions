#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        reverse(digits.begin(),digits.end());
        int carry = 1;
        
        for(int i = 0 ; i < digits.size() ; i++)
        {
            int temp = digits[i];
            digits[i] = (digits[i]+carry)%10;
            carry = (temp + carry)/10;
        }

        
        if(carry)
            digits.push_back(carry);
        
        reverse(digits.begin(),digits.end());
        return digits;
    }
};