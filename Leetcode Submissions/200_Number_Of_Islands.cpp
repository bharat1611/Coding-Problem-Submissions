class Solution {
public:
    void dfs(vector<vector<char>> &grid, int i, int j)
    {
        if(i < 0 || i >= grid.size() || j < 0 || j >= grid[i].size() || grid[i][j] != '1')
            return;
        
        grid[i][j] = '2';
        
        dfs(grid, i + 1, j);
        dfs(grid, i - 1, j);
        dfs(grid, i, j + 1);
        dfs(grid, i , j - 1);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int islands = 0;
        for(int i = 0 ; i < grid.size(); i++)
        {
            for(int j = 0 ; j < grid[i].size(); j++)
            {
                if(grid[i][j] == '0')
                    continue;
                else if(grid[i][j] == '1')
                {
                    islands++;
                    dfs(grid, i, j);
                }
            }
        }
        return islands;  
    }
};