class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int count = 0;
        for(int i = 0 ; i < s.length(); i++)
        {
            if(s[i] == '('){
                count++;
            }
            else if(s[i] == ')')
            {
                if(count == 0)
                    s[i] = '#';
                else
                    count--;
            }
        }
        count = 0;
        for(int i = s.length() - 1; i >= 0 ; i--)
        {
            if(s[i] == ')'){
                count++;
            }
            else if(s[i] == '(')
            {
                if(count == 0)
                    s[i] = '#';
                else 
                    count--;
            }
        }
        string ans = "";
        for(int i = 0 ; i < s.length(); i++)
        {
            if(s[i] != '#')
                ans.push_back(s[i]);
        }
        return ans;
    }
};

class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;
        for(int i = 0 ; i < s.length(); i++)
        {
            if(s[i] == '(')
                st.push(i);
            else if(s[i] == ')')
            {
                if(!st.empty())
                    st.pop();
                else
                    s[i] = '#';               
            }
        }
        while(!st.empty())
        {
            s[st.top()] = '#';
            st.pop();
        }
        string ans = "";
        for(int i = 0 ; i < s.length(); i++)
        {
            if(s[i] != '#')
                ans.push_back(s[i]);
        }
        return ans;
    }
};