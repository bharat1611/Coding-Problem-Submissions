// Intuition : SUm of indexes of Diagonal Elements is same
// The even sum indexes are in reverse order and odd ones are in normal order
class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        map<int, vector<int>> mp;
        
        for(int i = 0 ; i < mat.size(); i++)
        {
            for(int j = 0 ; j < mat[i].size(); j++)
            {
                int sum = i + j;
                mp[sum].push_back(mat[i][j]);
            }
        }
        vector<int> ans;
        for(auto i : mp)
        {
            if(i.first % 2 == 0) // even index elements are in reverse order
            {
                for(int x = i.second.size() - 1; x >= 0; x--)
                {
                    ans.push_back(i.second[x]);
                }
            }
            else        // odd index elements are in normal order
            {
                for(int x = 0 ; x < i.second.size(); x++)
                {
                    ans.push_back(i.second[x]);
                }
            }
        }
        return ans;
    }
};