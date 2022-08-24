class Solution {
public:
    int monotoneIncreasingDigits(int n) {
        string s = to_string(n);
        int i = 1;
        while(i < s.length() && s[i] >= s[i - 1])
            i++;
        
        while(i > 0 && i < s.length() and s[i] < s[i - 1])
        {
            s[i - 1]--;
            i--;
        }
        for(int j = i + 1; j < s.length(); j++)
        {
            s[j] = '9';
        }
        return stoi(s);   
    }
};