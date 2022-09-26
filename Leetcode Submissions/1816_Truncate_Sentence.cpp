class Solution {
public:
    string truncateSentence(string s, int k) {
        int count = 0;
        string temp = "", ans = "";
        for(int i = 0 ; i < s.length(); i++)
        {
            if(s[i] == ' ')
            {
                count++;
                if(count == k){
                    ans += temp;
                    return ans;
                }
                temp += ' ';
                ans += temp;
                temp = "";
            }
            else
                temp += s[i];
        }
        ans += temp;
        return ans;
    }
};