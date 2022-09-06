class Solution {
public:
    char findTheDifference(string s, string t) {
        int s_sum = 0, t_sum = 0;
        for(int i = 0 ; i < s.length(); i++)
        {
            s_sum += (int)s[i];
        }
        for(int i = 0 ; i < t.length(); i++)
        {
            t_sum += (int)t[i];
        }
        return (char)(t_sum - s_sum);
    }
};