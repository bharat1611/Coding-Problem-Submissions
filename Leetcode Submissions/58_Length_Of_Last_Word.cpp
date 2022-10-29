class Solution {
public:
    int lengthOfLastWord(string s) {
        string str = "";
        int n = s.length();
        while(s[n - 1] == ' ')
        {
            n--;
        }
        for(int i = 0; i < n; i++)
        {
            str = str + s[i];
            if(s[i] == ' ')
                str = "";
        }
        return str.length();
    }
};