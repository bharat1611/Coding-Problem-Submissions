#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) 
    {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> ans(m, vector<int>(n, 0));
        
        for(int i = 0;i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                int col = (j + k)%n;
                int rem = (j + k)/n;
                int row = (i + rem)%m;
                ans[row][col] = grid[i][j];
            }
        }
        return ans;
    }
};