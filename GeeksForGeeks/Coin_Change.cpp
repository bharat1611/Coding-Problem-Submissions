//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
//   long long int solve(int coins[], int i, int n, int target)
//   {
//       if(target == 0)
//         return 1;
//     if(target < 0)
//         return 0;
//     if(i >= n)
//         return 0;
//     return solve(coins, i , n, target - coins[i]) + solve(coins, i + 1, n, target);
//   }
  
//     long long int count(int coins[], int N, int sum) {
//         return solve(coins, 0, N, sum);
//     }
    
    long long int solve(int coins[],vector<vector<long long int >> &dp, int i, int n, int target)
  {
      if(target == 0)
        return 1;
    if(target < 0)
        return 0;
    if(i >= n)
        return 0;
    if(dp[i][target] != -1)
        return dp[i][target];
    return dp[i][target] = solve(coins, dp, i , n, target - coins[i]) + solve(coins, dp, i + 1, n, target);
  }
  
    long long int count(int coins[], int N, int sum) {
        vector<vector<long long int>> dp(N + 1, vector<long long int> (sum + 1, -1));
        return solve(coins, dp, 0, N, sum);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends