class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        
        int m = grid.size();
        int n = grid[0].size();
        vector<int> ans(n, -1);
        // iterating through the columns
        for(int j = 0 ; j < n; j++)
        {
            int curr_pos = j, next_pos = -1;
            // iterating through the rows
            for(int i = 0 ; i < m; i++)
            {
                next_pos = curr_pos + grid[i][curr_pos];
                // check if isValid or stuck somewhere in between
                if(next_pos < 0 || next_pos >= n || grid[i][curr_pos] != grid[i][next_pos]){
                    curr_pos = -1;
                    break;
                }
                // else
                curr_pos = next_pos;
            }
            ans[j] = curr_pos;
        }
        return ans;
    }
};