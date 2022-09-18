class Solution {
public:
    vector<vector<int>> ans;
    void combine(int n, int k, int curr, vector<int> &level)
    {
       if(level.size() >= k)
       {
           ans.push_back(level);
           return;
       }
        for(int i = curr; i <= n; i++)
        {
            level.push_back(i);
            combine(n , k, i + 1, level);
            level.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> level;
        
        combine(n, k, 1, level);
        return ans;        
        
    }
};