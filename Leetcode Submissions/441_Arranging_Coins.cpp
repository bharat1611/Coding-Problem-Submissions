class Solution {
public:
    int arrangeCoins(int n) {
        int ans = 0;
        for(int i = 1; i <= n; i++)
        {
            if(i <= n){
                n = n - i;
                ans++;
            }
        }
        return ans;
    }
        
};