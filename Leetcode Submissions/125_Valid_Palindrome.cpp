class Solution {
public:
    bool isPalindrome(string s) {
        if(s.length() == 0)
            return true;
        for(int i = 0 ; i < s.length(); i++)
            s[i] = tolower(s[i]);
        
        int i = 0;
        string str = "";
        while(i < s.length())
        {
            if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= '0' && s[i] <= '9')
                str += s[i];
            i++;
        }
        
        i = 0;
        cout << str;
        int j = str.length()- 1;
        while(i <= j)
        {
            if(str[i] != str[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};