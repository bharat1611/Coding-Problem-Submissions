// Recursion
// #include <bits/stdc++.h> 
// #define MOD 1000000007
// int solve(int n, int i, vector<int> &dp)
// {
//     if(i == n)
//         return 1;
//     if(i > n)
//         return 0;
    
//     return (solve(n, i + 1, dp) + solve(n, i + 2, dp))%MOD;
    
// }
// int countDistinctWays(int n) {
//     return solve(n, 0, dp)%MOD;
// }

// Memoisation
// #include <bits/stdc++.h> 
// #define MOD 1000000007
// int solve(int n, int i, vector<int> &dp)
// {
//     if(i == n)
//         return 1;
//     if(i > n)
//         return 0;
//     if(dp[i] != -1)
//         return dp[i];
    
//     return dp[i] = (solve(n, i + 1, dp) + solve(n, i + 2, dp))%MOD;
    
// }
// int countDistinctWays(int n) {
//     vector<int> dp(n + 1, -1);
//     return solve(n, 0, dp)%MOD;
// }

// Tabulation
// #include <bits/stdc++.h> 
// #define MOD 1000000007
// int solve(int n) {
//     vector<int> dp(n + 1, 0);
//     dp[0] = 1;
//     dp[1] = 1;
//     for(int i = 2; i <= n; i++)
//     {
//         if(i > n)
//             continue;
//         dp[i] = (dp[i - 1] + dp[i - 2])%MOD;
//     }

//     return dp[n];
// }

// int countDistinctWays(int n) {
    
//     return solve(n)%MOD;
// }

// Space Optimisation
#include <bits/stdc++.h> 
#define MOD 1000000007
int solve(int n) {

    if(n == 0 || n == 1)
        return 1;
    int prev = 1;
    int curr = 1;

    int ans = 0;
    for(int i = 2; i <= n; i++)
    {
        if(i > n)
            continue;
        ans = (prev + curr)%MOD;
        prev = curr;
        curr = ans;
    }
    return ans;
}

int countDistinctWays(int n) {
    return solve(n)%MOD;
}