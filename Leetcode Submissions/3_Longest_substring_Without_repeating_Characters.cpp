class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        if(s.length() == 0)
            return 0;
        int len = 0;
        int ans = 0;
        for(int i = 0 ; i < s.length(); i++)
        {
            if(st.find(s[i]) != st.end())
            {
                while(len < i && st.find(s[i]) != st.end())
                {
                    st.erase(s[len]);
                    len++;
                }
            }
            st.insert(s[i]);
            ans = max(ans, i - len + 1 );   
        }
        return ans;
    }
};