// TLE
// class Solution {
// public:
//     int solve(vector<int>&coins,int i, int amt)
//     {
//         if(amt == 0)
//             return 1;
//         if(amt < 0)
//             return 0;
//         if(i >= coins.size())
//             return 0;
//         return solve(coins, i, amt - coins[i]) + solve(coins, i + 1, amt);
//     }
//     int change(int amount, vector<int>& coins) {
//         return solve(coins,0, amount);
//     }
// };

// Memoisation
// class Solution {
// public:
//     int solve(vector<int>&coins,vector<vector<int>> &dp, int i, int amt)
//     {
//         if(amt < 0)
//             return 0;
//         if(i >= coins.size())
//             return 0;
//         if(amt == 0)
//             return 1;
//         if(dp[i][amt] != -1)
//             return dp[i][amt];
//         return dp[i][amt] = solve(coins, dp, i, amt - coins[i]) + solve(coins, dp, i + 1, amt);
//     }
//     int change(int amount, vector<int>& coins) {
//         vector<vector<int>> dp(coins.size() + 1, vector<int> (amount + 1, -1));
//         return solve(coins,dp ,0, amount);
//     }
// };