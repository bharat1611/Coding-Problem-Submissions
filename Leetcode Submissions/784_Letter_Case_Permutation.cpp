class Solution {
public:
    vector<string> ans;
    void helper(string s, int index)
    {
        // Base Case
        if(index >= s.length())
        {
            ans.push_back(s);
            return;
        }
        // If s[index] is uppercase, convert to lower and call for helper again
        if(s[index] >= 65 and s[index] <= 90)
        {
            s[index] = (int)tolower(s[index]);
            helper(s, index + 1);
            s[index] = (int)toupper(s[index]);
        }
        // if(s[index]) is lowercase, convert to uppercase and call for helper
        else if(s[index] >= 97 and s[index] <= 122)
        {
            s[index] = (int)toupper(s[index]);
            helper(s, index + 1);
            s[index] = (int)tolower(s[index]);
        }
        // if s[index] is not a letter, ie a digit or something else
        helper(s, index + 1);
    }
    
    vector<string> letterCasePermutation(string s) {
        helper(s, 0);
        return ans;
    }
};