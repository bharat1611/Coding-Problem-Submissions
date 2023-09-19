class Solution {
public:
    int getLucky(string s, int k) {
        string curr = "";
        for(int i = 0 ; i < s.length(); i++)
        {
            int c = s[i] - 'a' + 1;
            curr += to_string(c);
        }
        int num = 0;
        while(k--)
        {
            num = 0;
            for(int i = 0 ; i < curr.length(); i++)
            {
                int d = (curr[i] - '0')%26;
                num += d;
            }
            curr = to_string(num);
        }
        return num;
    }
};