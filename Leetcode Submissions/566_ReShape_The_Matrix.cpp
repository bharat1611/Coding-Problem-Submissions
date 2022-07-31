class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) 
    {
        int n = mat.size();
        int m = mat[0].size();
        if(n*m != r*c)
            return mat;
        
        vector<vector<int>>ans(r, vector<int>(c, 0));
        int l = 0, k = 0;
        for(int i = 0; i < n;i++)
        {
            for(int j = 0; j < m;j++)
            {
                ans[l][k] = mat[i][j];
                k++;
                if(k >= c)
                { 
                    l++;
                    k = 0;
                }
            }
        }
        return ans;   
    }
};