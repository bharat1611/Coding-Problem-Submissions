class Solution {
public:
    // TLE
    // int solve(string text1, string text2, int i, int j)
    // {
    //     if(i >= text1.size() || j >= text2.size())
    //         return 0;
    //     int ans = 0;
    //     if(text1[i] == text2[j])
    //         ans = 1 + solve(text1, text2, i + 1, j + 1);
    //     else
    //         ans = max(solve(text1, text2, i + 1, j), solve(text1, text2, i, j + 1));
    // }

    // Memoisation
    
//     int solveMem(vector<vector<int>>&dp, string &text1, string &text2, int i, int j)
//     {
//         if(i == text1.size() || j == text2.size())
//             return 0;
//         if(dp[i][j] != -1)
//             return dp[i][j];
        
//         if(text1[i] == text2[j])
//             return dp[i][j] = 1 + solveTab(dp, text1, text2, i + 1, j + 1);
//         else
//             return dp[i][j] = max(solveTab(dp, text1, text2, i + 1, j), solveTab(dp, text1, text2, i, j + 1));
        
//     }
    
    // Tabulation
//      int solveTab(string &text1, string &text2)
//      {
//          int n1 = text1.length(), n2 = text2.length();
//          vector<vector<int>> dp(n1 + 1, vector<int> (n2 + 1, 0));
         
//          for(int i = n1 - 1; i >= 0; i--)
//          {
//              for(int j = n2 - 1; j >= 0; j--)
//              {
//                  if(text1[i] == text2[j])
//                       dp[i][j] = 1 + dp[i + 1][j + 1];
//                  else
//                      dp[i][j] = max(dp[i + 1][j], dp[i][j + 1]);
//              }
//          }
//          return dp[0][0];
//      }
    // Tabulation + Space Opt
    
    int solveTab(string &text1, string &text2)
     {
         int n1 = text1.length(), n2 = text2.length();
         vector<vector<int>> dp(n1 + 1, vector<int> (n2 + 1, 0));
        vector<int> curr(n2 + 1, 0);
        vector<int> next(n2 + 1, 0);
         
         for(int i = n1 - 1; i >= 0; i--)
         {
             for(int j = n2 - 1; j >= 0; j--)
             {
                 if(text1[i] == text2[j])
                      curr[j] = 1 + next[j + 1];
                 else
                     curr[j] = max(next[j], curr[j + 1]);
             }
             next = curr;
         }
         return next[0];
     }
    int longestCommonSubsequence(string text1, string text2) {
         
         return solveTab(text1, text2);
        // int n1 = text1.size(), n2 = text2.size();
        // vector<vector<int>> dp(n1, vector<int> (n2, -1));
        // return solveMem(dp, text1, text2, 0, 0);
        // return solve(text1, text2, 0, 0);
    }
};