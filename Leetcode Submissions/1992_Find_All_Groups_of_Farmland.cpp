class Solution {
public:
    void dfs(vector<vector<int>>&land, int i, int j, int &r1, int &c1, int &r2, int &c2, int m, int n)
    {
        if (i < 0 || i >= m || j < 0 || j >= n || land[i][j] != 1)
            return;

        
        land[i][j] = 2;
        r1 = min(r1, i);
        c1 = min(c1, j);
        r2 = max(r2, i);
        c2 = max(c2, j);
        
        dfs(land, i + 1, j, r1, c1, r2, c2, m, n);
        dfs(land, i, j + 1, r1, c1, r2, c2, m, n);
        dfs(land, i - 1, j, r1, c1, r2, c2, m , n);
        dfs(land, i, j - 1, r1, c1, r2, c2, m, n);
    }
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        int m = land.size(), n = land[0].size();
        vector<vector<int>> ans;
        for(int i = 0 ; i < m; i++)
        {
            for(int j = 0 ; j < n; j++){
                if(land[i][j] == 1){
                    int r1 = i, c1 = j, r2 = i, c2 = j; 
                    dfs(land, i, j, r1, c1, r2, c2, m, n);
                    ans.push_back({r1, c1, r2, c2});
                }
            }
        }
        return ans;
    }
};