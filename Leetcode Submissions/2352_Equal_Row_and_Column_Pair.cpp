class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        
        vector<string> row, col;
        for(int i = 0 ; i < grid.size(); i++)
        {
            string r = "";
            string c = "";
            for(int j = 0 ; j < grid[i].size(); j++)
            {
                r += to_string(grid[i][j]) + ".";   
                c += to_string(grid[j][i]) + ".";
            }
            row.push_back(r);
            col.push_back(c);
        }
        map<string, int> mp;
        
        for(int i = 0; i < row.size(); i++)
            mp[row[i]]++;
        int count = 0;
        for(int i = 0 ; i < col.size(); i++)
        {
            if(mp.find(col[i]) != mp.end())
              count += mp[col[i]];
        }
        return count;
    }
};