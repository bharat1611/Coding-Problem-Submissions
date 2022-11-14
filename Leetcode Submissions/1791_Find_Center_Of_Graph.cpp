class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int, int> mp;
        for(int i = 0 ; i < edges.size(); i++)
        {
            for(int j = 0; j < 2; j++)
                mp[edges[i][j]]++;
        }
        for(auto i : mp)
            if(i.second > 1)
                return i.first;
        return -1;
    }
    
};