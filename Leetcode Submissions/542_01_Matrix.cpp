class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        queue<pair<int, int>> q;   
        for(int i = 0 ; i < mat.size(); i++)
        {
            for(int j = 0 ; j < mat[i].size(); j++)
            {
                if(mat[i][j] == 0){
                    q.push({i, j});
                }
                else
                    mat[i][j] = -1;
            }
        }
        int dir[4][2] = {{-1,0}, {0, -1}, {1,0},{0,1}};
        int level = 1;
        while(!q.empty())
        {
            int n = q.size();
            for(int i = 0 ; i < n; i++)
            {
                int a = q.front().first;
                int b = q.front().second;
                q.pop();
                
                for(int j = 0 ; j < 4; j++)
                {
                    int newR = a + dir[j][0];
                    int newC = b + dir[j][1];
                    if(newR < 0 || newR >= mat.size() || newC < 0 || newC >= mat[0].size() || mat[newR][newC] != -1)
                    {   
                        continue;
                    }
                    mat[newR][newC] = level;
                    q.push({newR, newC});
                }
            }
            ++level;
        }
        return mat; 
    }
};