#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        long rev=0,digit=0;
        while(x!=0)
        {
            digit=x%10;
            rev=10*rev + digit;
            x/=10;
        }
        if(rev>=2147483648 || rev<-2147483648)
            return 0;
        return rev;
    }
};