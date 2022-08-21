class Solution {
public:
    int nthUglyNumber(int n) {
        
        vector<int> dp(n);
        int two = 0, three = 0, five = 0;
        dp[0] = 1;
        int curr_min = 0;
        for(int i = 1 ; i < n; i++)
        {
            dp[i] = min(2 * dp[two], (min(3*dp[three], 5*dp[five])));
            
            if(dp[i] == 2 * dp[two])
                two++;
            if(dp[i] == 3 * dp[three])
                three++;
            if(dp[i] == 5 * dp[five])
                five++;
                
        }
        // for(auto i : dp)
        //     cout << i << "  " << endl;
        return dp[n - 1];
    }
};