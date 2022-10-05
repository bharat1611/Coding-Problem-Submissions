class Solution {
public:
    int countHomogenous(string s) {
        if(s.length() == 1)
            return 1;
        long sum = 0;
        vector<long> dp(s.length(), 1);
        for(int i = 1; i < s.length(); i++)
        {
            if(s[i] == s[i - 1])
                dp[i] = dp[i - 1] + 1;
        }
        for(int i = 0 ; i < s.length() - 1; i++)
        {
            if(s[i] != s[i + 1])
            {
                sum += (dp[i]*(dp[i] + 1)/2)%1000000007;
            }
        }
        int n = dp.size() - 1;
        sum += (dp[n ]*(dp[n] + 1)/2)%1000000007;
        return sum;
    }
};