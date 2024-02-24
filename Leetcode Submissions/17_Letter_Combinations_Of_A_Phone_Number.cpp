class Solution
{
public:
    vector<string> ans;
    void solve(string digits, int index, string mp[], string output)
    {
        // base case
        if (index >= digits.length())
        {
            ans.push_back(output);
            return;
        }
        int num = digits[index] - '0';
        string val = mp[num];

        for (int i = 0; i < val.size(); i++)
        {
            output.push_back(val[i]);
            solve(digits, index + 1, mp, output);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits)
    {
        if (digits.size() == 0)
            return {};
        string mp[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        string output;
        solve(digits, 0, mp, output);
        return ans;
    }
};