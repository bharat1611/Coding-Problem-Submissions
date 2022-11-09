class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        map<int, vector<int>> mp;
        for(int i = nums.size() - 1 ; i >= 0; i--)
        {
            for(int j = nums[i].size() - 1; j >= 0; j--)
            {
                mp[i + j].push_back(nums[i][j]);
            }
        }
        vector<int> ans;
        for(auto i : mp)
        {
            for(int j = 0 ; j < i.second.size(); j++)
            {
                ans.push_back(i.second[j]);
            }
        }
        return ans;
    }
};