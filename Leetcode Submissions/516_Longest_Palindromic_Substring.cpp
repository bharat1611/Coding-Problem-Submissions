class Solution {
public:
    int solveMem(string &s1, string &s2, int i, int j, vector<vector<int>> &dp)
    {
        if(i == s1.length() || j == s2.length())
            return 0;
        if(dp[i][j] != -1)
            return dp[i][j];
        
        if(s1[i] == s2[j])
            return dp[i][j] = 1 + solveMem(s1, s2, i + 1, j + 1, dp);
        else
            return dp[i][j] = max(solveMem(s1,s2, i + 1, j, dp), solveMem(s1, s2, i, j + 1, dp));
                      
    }
    int longestPalindromeSubseq(string s) {
        string rev = s;
        reverse(rev.begin(), rev.end());
        vector<vector<int>> dp(s.length() + 1, vector<int> (s.length() + 1, -1));
        return solveMem(s, rev, 0, 0, dp);
        
    }
};