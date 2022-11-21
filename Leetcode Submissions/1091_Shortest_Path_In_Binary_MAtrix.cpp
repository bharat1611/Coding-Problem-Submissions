class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if(grid[0][0] == 1)
            return -1;
        int dirx[8] = {0, 1,-1,-1,-1,0,1,1};
        int diry[8] = {1,1,1, 0,-1,-1,-1,0};
        int n = grid.size();
        vector<vector<int>> dist(n, vector<int> (n, 1e9));
        dist[0][0] = 0;
        queue<pair<pair<int, int>, int>> q;
        q.push({{0,0}, 1});
        int curr_count = 1;
        grid[0][0] = 1;
        
        while(!q.empty())
        {
            int row = q.front().first.first;
            int col = q.front().first.second;
            curr_count = q.front().second;
            q.pop();
            if(row == n - 1 and col == n - 1)
                return curr_count;
            for(int i = 0 ; i < 8; i++)
            {
                int nxt_x = row + dirx[i];
                int nxt_y = col + diry[i];
                if(nxt_x < 0 or nxt_x >= n or nxt_y < 0 or nxt_y >= n or grid[nxt_x][nxt_y] != 0 or curr_count + 1 >= dist[nxt_x][nxt_y])
                    continue;
                dist[nxt_x][nxt_y] = 1 + curr_count;
                q.push({{nxt_x, nxt_y}, 1 + curr_count});
            }
        }
        return -1;
    }
};