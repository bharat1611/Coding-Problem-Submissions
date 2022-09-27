class Solution {
public:
    int minFlipsMonoIncr(string s) {
        vector<int> dp(s.length(), 0);
        int temp = 0, ans = INT_MAX;
        // left to right, suffix-counting 1's
        for(int i = 0 ; i < s.length(); i++)
        {
            if(s[i] == '1')
                temp += 1;
            dp[i] = temp;
        }
        temp = 0;
        // right to left, suffix-counting 0's
        for(int i = s.length() - 1; i >= 0; i--)
        {
            if(s[i] == '0')
                temp += 1;
            dp[i] += temp;
            ans = min(ans, dp[i]);
        }
        return ans - 1;
    }
};