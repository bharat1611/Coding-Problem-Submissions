class Solution {
public:
    string generateTheString(int n) {
        string s = "";
        for(int i = 0 ; i < n; i++)
        {
            s += 'a';
        }
        if(n % 2 != 0)
            return s;
        s[n - 1] = 'b';
        return s;
    }
};