class Solution {
public:
    string removeDuplicateLetters(string s) {
        unordered_map<char, int> mp;
        vector<bool> seen(26, false);
        
        for(int i = 0 ; i < s.length(); i++)
            mp[s[i]]++;
        
        stack<char> st;
        for(int i = 0; i < s.length(); i++)
        {
            if(seen[s[i] - 'a'] == true)
            {
                mp[s[i]]--;
                continue;
            }
            while(!st.empty() and mp[st.top()] > 0 and st.top() > s[i])
            {
                seen[st.top() - 'a'] = false;
                st.pop();
            }
            st.push(s[i]);
            seen[st.top() - 'a'] = true;
            mp[s[i]]--;
        }
        string ans = "";
        while(!st.empty())
        {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};