class Solution {
public:
    bool checkUpper(string s)
    {
        for(int i = 0 ; i < s.length(); i++)
            if(isupper(s[i]))
               return true;
        return false;
    }
    bool checkLower(string s)
    {
        for(int i = 0 ; i < s.length(); i++)
            if(islower(s[i]))
                return true;
        return false;
    }
    bool checkDigit(string s)
    {
        for(int i = 0 ; i < s.length(); i++)
            if(s[i] >= '0' and s[i] <= '9')
                return true;
        return false;
    }
    bool special(string s)
    {
        for(int i = 0 ; i < s.length(); i++)
        {
            int c = s[i];
            if((c >= 33 and c <= 46) or c == 64 or c == 94)
                return true;
        }
        return false;
    }
    bool strongPasswordCheckerII(string s) {
        int n = s.length();
        if(n < 8)
            return false;
        for(int i = 0 ; i < n - 1; i++)
        {
            if(s[i] == s[i + 1])
                return false;
        }
        if(checkUpper(s) and checkLower(s) and checkDigit(s) and special(s))
            return true;
        return false;
    }
};