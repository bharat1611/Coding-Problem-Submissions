class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        int count = 0;
        for(int i = 0 ; i < s.length(); i++)
        {
            if(s[i] == '*')
                st.pop();
            else{
                st.push(s[i]);
            }
        }
        
        int i = st.size()-1;
        string ans(st.size(), '*');
        while(!st.empty()){
            ans[i--] = st.top();
            st.pop();
        }
        return ans;
    }
};