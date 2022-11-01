class Solution {
public:
    vector<string> ans;
    void generate(string s, int open, int close, int n)
    {
        if(open == n and close == n)
        {
            ans.push_back(s);
            return;
        }
        if(close > open || open > n || close > n)
            return;
        generate(s + "(", open + 1, close, n);
        generate(s + ")", open, close + 1, n);
        
    }
    vector<string> generateParenthesis(int n) {
        {
            generate("", 0, 0, n);
            return ans;
        }
    }
};

class Solution {
public:
    vector<string> ans;
    void generate(string s, int open, int close, int n)
    {
        if(open == n and close == n)
        {
            ans.push_back(s);
            return;
        }
        if(open < n)
        {
            s = s + "(";
            generate(s, open + 1, close, n);
            s.pop_back();
        }
        if(close < open)
        {
            s = s + ")";
            generate(s, open, close + 1, n);
            s.pop_back();
        }
        
    }
    vector<string> generateParenthesis(int n) {
        {
            generate("", 0, 0, n);
            return ans;
        }
    }
};