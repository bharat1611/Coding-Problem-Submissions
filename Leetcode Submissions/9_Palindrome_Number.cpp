#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        long rev=0;
        int initial=x;
        while(x>0)
        {
            rev=rev*10 + x%10;
            x/=10;
        }
        bool b=initial==rev;
        return b;
    }
};