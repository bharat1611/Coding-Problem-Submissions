class Solution {
public:
    bool checkString(string s) {
        int a = 0, b = 0;
        for(int i = 0 ; i < s.length(); i++)
        {
            if(s[i] == 'a')
                a++;
            if(s[i] == 'b')
                b++;
            if(s[i] == 'a' and b > 0)
                return false;
        }
        return true;
    }
};