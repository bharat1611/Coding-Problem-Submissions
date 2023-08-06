class Solution {
public:
    string finalString(string s) {
        
        string str = "";
        
        for(int i = 0 ; i < s.length(); i++)
        {
            if(s[i] == 'i')
            {
                reverse(str.begin(), str.end());
                continue;
            }
            str = str + s[i];
        }
        return str;
        
    }
};