class Solution {
public:
    string removeDuplicates(string s) {
        
        for(int i = 0 ; i < s.length(); i++)
        {
            if(s[i] == s[i + 1])
            {
                s.erase(s.begin() + i);
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