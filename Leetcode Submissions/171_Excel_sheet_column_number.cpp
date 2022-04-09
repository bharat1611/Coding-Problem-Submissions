#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int titleToNumber(string columnTitle) 
    {
        int n = columnTitle.length();   
        if(n == 1)                                  //If string contains a single character
            return (columnTitle[0] - 64);           //return its numeral value
        
        int ans = 0, i = 0;
        while(i < columnTitle.length())
        {
            int n = (int)columnTitle[i] - 64;       //n is the index of the ith character of string
            ans = 26*ans + n;
            i++;
        }
        return ans;
        
    }
};