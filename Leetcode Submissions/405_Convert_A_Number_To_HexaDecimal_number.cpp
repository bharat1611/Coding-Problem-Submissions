class Solution {
public:
    string toHex(int num) {
        if(num == 0)
            return "0";
        string ans = "";
        string conv = "0123456789abcdef";
        unsigned int n = num;
        while(n)
        {
            int carry = n%16;
            ans += conv[carry];
            n /= 16;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};