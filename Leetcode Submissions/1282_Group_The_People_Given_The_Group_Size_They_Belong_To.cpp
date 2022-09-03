class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        if(groupSizes.size() == 1)
            return {{0}};
        
        vector<vector<int>> v(groupSizes.size() + 1);
        for(int i = 0 ; i < groupSizes.size(); i++)
        {
            v[groupSizes[i]].push_back(i);
        }
        vector<int> level;
        vector<vector<int>> ans;
        
        for(int i = 0; i < v.size(); i++)
        {
            for(int j = 0; j < v[i].size(); j++)
            {
                level.push_back(v[i][j]);
                if(level.size() != 0 and level.size() >= i)
                {
                    ans.push_back(level);
                    level.clear();
                }
            }
        }
        return ans;  
    }
};