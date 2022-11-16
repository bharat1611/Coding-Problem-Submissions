class Solution {
public:
    string removeKdigits(string num, int k) {
        if(num.length() == 1)
            return "0";
        stack<char> st;
        for(int i = 0 ; i < num.length(); i++)
        {
            while(!st.empty() and st.top() > num[i] and k > 0)
            {
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        if(k)
        {
            while(k--)
                st.pop();
        }
        
        string ans = "";
        while(!st.empty())
        {
            ans += st.top();
            st.pop();
        }
        int i = ans.size() - 1;
        while(i > 0 and ans[i] == '0'){
            ans.pop_back();
            i--;
        }
        reverse(ans.begin(), ans.end());
        return (ans == "")? "0" : ans;
    }
};