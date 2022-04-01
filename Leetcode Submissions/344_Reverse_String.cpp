#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) 
    {
        int n = s.size();
        if(n == 0)
            return;
        int j = n - 1, i = 0;
        
        while(i < j)
            swap(s[i++] , s[j--]);
    }
};