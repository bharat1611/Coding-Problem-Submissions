class Solution {
public:
    void helper(vector<vector<int>> &grid, int i, int j)
    {
        if(i < 0  || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == 1)
            return;
        
        grid[i][j] = 1;
        helper(grid, i + 1, j);
        helper(grid, i - 1, j);
        helper(grid, i, j + 1);
        helper(grid, i, j - 1);
    }
    int closedIsland(vector<vector<int>>& grid) {
        int count = 0;
        for(int i = 0; i < grid.size(); i++)
        {
            for(int j = 0 ; j < grid[0].size(); j++)
            {
                if((i == 0 || j == 0 || i == grid.size() - 1 || j == grid[0].size() - 1 ) and grid[i][j] == 0)
                    grid[i][j] == 1;
            }
        }
        for(int i = 0; i < grid.size(); i++)
        {
            for(int j = 0 ; j < grid[0].size(); j++)
            {
                cout << grid[i][j] << " ";
            }
            cout << endl;
        }
        for(int i = 0 ; i < grid.size() - 1; i++)
        {
            for(int j = 0 ; j < grid[i].size() - 1; j++)
            {
                if(grid[i][j] == 0)
                {
                    helper(grid, i, j);
                    count++;
                }
            }
        }
        return count;
    }
};