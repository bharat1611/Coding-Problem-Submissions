class Solution {
public:
    int balancedStringSplit(string s) {
        int balanced = 0;
        int ans = 0;
        for(int i = 0 ; i < s.length(); i++)
        {
            if(s[i] == 'L')
                balanced++;
            else if(s[i] == 'R')
                balanced--;
            if(balanced == 0)
                ans++;
        }
        return ans;
    }
};