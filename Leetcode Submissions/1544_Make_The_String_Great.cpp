class Solution {
public:
    string makeGood(string s) {
        if(s.length() == 1)
            return s;
        for(int i = 0 ; i < s.length(); i++)
        {
            if(abs(s[i] - s[i + 1]) == 32)
            {
                s.erase(s.begin() + i + 1);
                s.erase(s.begin() + i);
                if(i == 0)
                    i--;
                else
                    i = i - 2;
            }
        }
        return s;
    }
};