class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int per = 0;
        for(int i = 0 ; i < m; i++)
        {
            for(int j = 0 ; j < n; j++)
            {
                if(grid[i][j] == 1)
                {
                    per += 4;
                    if(i - 1 >= 0 and grid[i - 1][j] == 1)
                        per--;
                    if(j - 1 >= 0 and grid[i][j - 1] == 1)
                        per--;
                    if(i + 1 < m and grid[i + 1][j] == 1)
                        per--;
                    if(j + 1 < n and grid[i][j + 1] == 1)
                        per--;
                }
            }
        }
        return per;
    }
};