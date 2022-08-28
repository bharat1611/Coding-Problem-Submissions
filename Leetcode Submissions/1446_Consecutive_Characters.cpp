class Solution {
public:
    int maxPower(string s) {
        vector<int> dp(s.length(), 1);
    
        for(int i = 1 ; i < s.length(); i++)
        {
            if(s[i] == s[i - 1])
                dp[i] = max(dp[i], 1 + dp[i - 1]);
        }
        return *max_element(dp.begin(), dp.end());
    }
};