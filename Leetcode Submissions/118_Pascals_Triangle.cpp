class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> ans;
        vector<int> firstRow;
        firstRow.push_back(1);
        ans.push_back(firstRow);
        for (int i = 1; i < numRows; i++)
        {
            vector<int> curRow;
            curRow.push_back(1);
            for (int j = 1; j <= i - 1; j++)
            {
                curRow.push_back(ans[i - 1][j] + ans[i - 1][j - 1]);
            }
            curRow.push_back(1);
            ans.push_back(curRow);
        }
        return ans;
    }
};