class Solution {
public:
    int bulbSwitch(int n) {
        int ans = 0,i = 1;
        while(n >= i*i)
        {
            ++ans;
            ++i;
        }
        return ans;
    }
};