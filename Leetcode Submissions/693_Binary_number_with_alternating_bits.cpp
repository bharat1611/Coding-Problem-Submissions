#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool hasAlternatingBits(int n) 
    {
        int bit1 = 0, bit2 = 0;         // to calculate alternate bits
        while(n > 0) {                  // till number is greater than 0
            bit1 = (n&1);               // first bit
            n >>= 1;                    // right shift n by 1
            bit2 = (n&1);               // calculate bit 2
            if(!(bit1^bit2))            // if xor of bit1 and bit 2 is 0, then not valid pattern
                return false;
        }
        return true;                    // otherwise return true
    }
};