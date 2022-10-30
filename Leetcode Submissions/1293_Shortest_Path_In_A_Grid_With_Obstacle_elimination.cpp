class Solution{
public:
    int shortestPath(vector<vector<int>> &grid, int k)
    {
        int n = grid.size(), m = grid[0].size();
        queue<vector<int>> que;
        vector<vector<int>> seen(n, vector<int>(m, -1));
        vector<pair<int, int>> dir = {{-1, 0},{0, -1},{0, 1},{1, 0}};

        que.push({0, 0, 0, 0});
        while (!que.empty())
        {
            auto front = que.front();
            int x = front[0], y = front[1], removedCount = front[2], steps = front[3];
            que.pop();

            if (x < 0 || x >= n || y < 0 || y >= m)
                continue;
            if (grid[x][y] == 1)
            {
                removedCount++;
                if (removedCount > k)
                    continue;
            }

            if (x == n - 1 && y == m - 1)
                return steps;
            if (seen[x][y] != -1 && seen[x][y] <= removedCount)
                continue;

            for (auto pairDir : dir)
            {
                que.push({x + pairDir.first, y + pairDir.second, removedCount, steps + 1});
            }
            seen[x][y] = removedCount;
        }
        return -1;
    }
};