class Solution {
public:
    void dfs(vector<vector<int>>& grid,vector<vector<int>>& ocean, int val, int i, int j)
    {
        if(i < 0 || j < 0||  i >= grid.size()|| j >= grid[0].size() || ocean[i][j]==1|| grid[i][j] < val)
            return;
        ocean[i][j] = 1;
        dfs(grid, ocean, grid[i][j], i - 1, j);
        dfs(grid, ocean, grid[i][j], i, j - 1);
        dfs(grid, ocean, grid[i][j], i + 1, j);
        dfs(grid, ocean, grid[i][j], i, j + 1);
    }
    
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
    
        int m = heights.size(), n = heights[0].size();
        vector<vector<int>> atlantic(m , vector<int>(n , 0));
        vector<vector<int>> pacific(m, vector<int>(n, 0));
        vector<vector<int>> ans;
        
        for(int i = 0 ; i < m ; i++)
        {
            dfs(heights, pacific, heights[i][0], i, 0);
            dfs(heights, atlantic, heights[i][n - 1], i, n - 1);
        }
        for(int i = 0 ; i < n; i++)
        {
            dfs(heights, pacific, heights[0][i], 0, i);
            dfs(heights, atlantic, heights[m - 1][i], m - 1, i);
        }
        
        for(int i = 0 ; i < m ; i++)
        {
            for(int j = 0 ; j < n ; j++)
            {
                if(atlantic[i][j] == 1 and pacific[i][j] == 1)
                    ans.push_back({i,j});
            }
        }
        return ans;
    }
};