class Solution {
public:
    void dfs(vector<vector<int>> &grid1, vector<vector<int>>&grid2, int i, int j, int m, int n,int &check)
    {
        if(i < 0 || i >=m or j < 0 or j >= n or grid2[i][j] != 1 or grid2[i][j] != 1)
            return;
        if(grid1[i][j] == 0 and grid2[i][j] == 1)
            check = 0;
        grid2[i][j] = 2;
        dfs(grid1, grid2, i + 1, j, m, n, check);
        dfs(grid1, grid2, i , j + 1, m, n, check);
        dfs(grid1, grid2, i, j - 1, m, n, check);
        dfs(grid1, grid2, i - 1, j, m, n, check);
    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        
        int m = grid1.size(), n = grid2[0].size();
        int count = 0;
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(grid1[i][j] == 1 and grid2[i][j] == 1)
                {
                    int check = 1;
                    dfs(grid1, grid2, i, j, m, n, check);
                    count += check;
                }
            }
        }
        return count;
    }
};