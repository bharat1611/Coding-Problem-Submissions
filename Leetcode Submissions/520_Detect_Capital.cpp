class Solution {
public:
    bool detectCapitalUse(string s) {
        int countU = 0, countL = 0;
        for(int i = 0 ; i < s.length(); i++)
        {
            if(s[i] >= 'A' and s[i] <= 'Z')
                countU++;
            if(s[i] >= 'a' and s[i] <= 'z')
                countL++;
        }
        
        if(countU == s.length() || countL == s.length())
            return true;
        
        if(s[0] >= 'A' and s[0] <= 'Z' and countL == s.length() - 1)
            return true;
        return false;
    }
};