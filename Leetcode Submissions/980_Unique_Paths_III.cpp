class Solution
{
public:
    int path(int i, int j, int n, int m, int &c, int count, vector<vector<int>> &grid)
    {
        if (i < 0 or j < 0 or i >= n or j >= m or grid[i][j] == -1 or grid[i][j] == 3)
            return 0;

        if (grid[i][j] == 2)
        {
            if (count - 1 == c)
                return 1;
            return 0;
        }
        grid[i][j] = 3;
        int up = path(i - 1, j, n, m, c, count + 1, grid);
        int down = path(i + 1, j, n, m, c, count + 1, grid);
        int left = path(i, j - 1, n, m, c, count + 1, grid);
        int right = path(i, j + 1, n, m, c, count + 1, grid);

        grid[i][j] = 0;

        return up + down + left + right;
    }

    int uniquePathsIII(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        int st, en;
        int c = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == 1)
                {
                    st = i;
                    en = j;
                }
                if (grid[i][j] == 0)
                {
                    c++;
                }
            }
        }
        return path(st, en, n, m, c, 0, grid);
    }
};