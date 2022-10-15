int dp[101][27][101][101];

class Solution
{
    int rec(const string &str, int i, int prev, int prevlen, int k, const int &n)
    {
        if (k < 0)
            return INT_MAX;
        if (i >= n)
            return 0;

        if (dp[i][prev][prevlen][k] != -1)
            return dp[i][prev][prevlen][k];

        int a1 = rec(str, i + 1, prev, prevlen, k - 1, n);
        int a2 = INT_MAX;

        if ((str[i] - 'a') == prev)
        {
            a2 = min(a2, rec(str, i + 1, prev, prevlen + 1, k, n) + (prevlen == 1 or prevlen == 9 or prevlen == 99));
        }
        else
        {
            a2 = min(a2, rec(str, i + 1, str[i] - 'a', 1, k, n) + 1);
        }

        // return min(a1, a2);
        return dp[i][prev][prevlen][k] = min(a1, a2);
    }

public:
    int getLengthOfOptimalCompression(string str, int k)
    {

        for (int i = 0; i <= str.length(); i++)
            for (int c = 0; c <= 26; c++)
                for (int j = 0; j <= str.length(); j++)
                    for (int kk = 0; kk <= k; kk++)
                        dp[i][c][j][kk] = -1;

        return rec(str, 0, 26, 0, k, str.length());
    }
};