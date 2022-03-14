#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int fib(int n) {
        int dp[30]={0}, ans=0;
        ans = fibo(n,dp);
        return ans;
        
    }
    
    int fibo(int n, int dp[])
    {
        if(n==0 || n==1)
            return n;
        if(dp[n]!=0)
            return dp[n];
        return dp[n] = fibo(n-1,dp) + fibo(n-2,dp);
    }
};