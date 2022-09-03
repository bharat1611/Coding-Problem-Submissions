class Solution {
public:
    bool checkOnesSegment(string s) {
        if(s.length() == 1)
            return s[0] == '1';
        for(int i = 0 ; i < s.length() - 1; i++)
        {
            if(s[i] == '0' and s[i + 1] == '1')
                return false;
        }
        return true;
    }
};