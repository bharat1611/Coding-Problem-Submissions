#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
bool isHappy(int n) {
    
    int x=0;
    float num=0;    
    
    while(true)
    {
        while(n>0)
        {
            x=n%10;
            num+=pow(x,2);
            n/=10;
        }
        if(num==1)
            return true;

        if(num==4)   
            return false;

        else
        {
            n=num;
            num=0;
        }
        
    }
    return false; 
}
};