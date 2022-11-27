class Solution {
public:
    int longestContinuousSubstring(string s) {
        int ans = INT_MIN, count = 1;
        for(int i = 0 ; i < s.length(); i++)
        {
            if((s[i + 1] - 'a') - (s[i] - 'a') == 1)
                count++;
            else
            {
                ans = max(ans, count);
                count = 1;
            }
        }
        return max(ans, count);
    }
};