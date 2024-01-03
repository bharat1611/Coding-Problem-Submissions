class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> v;
        
        v.push_back({1});
        for(int i = 1 ; i < numRows; i++)
        {
            vector<int> level(i + 1, 0);
            level[0] = 1;
            level[i] = 1;
            for(int j = 1; j < i;j++)
            {
                level[j] = v[i - 1][j - 1] + v[i - 1][j];
            }
            v.push_back(level);
        }        
        return v;
    }
};