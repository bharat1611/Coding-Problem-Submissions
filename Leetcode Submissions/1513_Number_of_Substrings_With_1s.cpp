class Solution {
public:
    int numSub(string s) {
        vector<long> dp(s.length(), 0);
        if(s[0] == '1')
            dp[0] = 1;
        
        long sum = 0;
        for(int i = 1 ; i < s.length(); i++)
        {
            if(s[i] == '1')
                dp[i] = dp[i - 1] + 1;
        }
        for(int i = 0 ; i < dp.size() - 1; i++)
        {
            if(dp[i] != 0 and dp[i + 1] == 0)
            {
                sum += ((dp[i])*(dp[i] + 1)/2)% 1000000007;
            }
        }
        if(dp[dp.size() - 1] != 0)
            sum += ((dp[dp.size() - 1])*(dp[dp.size() - 1] + 1)/2)% 1000000007;
        return sum;
    }
};

class Solution {
public:
    int numSub(string s) {
        long count = 0;
        long sum = 0;
        for(int i = 0 ; i < s.length(); i++)
        {
            if(s[i] == '1')
                count++;
            else
            {
                sum += (count * (count + 1)/2) % 1000000007;
                count = 0;
            }
        }
        sum += (count * (count + 1)/2) % 1000000007;
        return sum;
    }
};