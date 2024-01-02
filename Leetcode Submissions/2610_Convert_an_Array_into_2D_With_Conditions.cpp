class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int, int> mp;
        int max_e = INT_MIN;
        for(int i = 0 ; i < nums.size(); i++){
            mp[nums[i]]++;
            if(mp[nums[i]] > max_e)
                max_e = mp[nums[i]];
            
        }
        vector<vector<int>> ans(max_e);
        int lev = 0;
        for(int i = 0 ; i < nums.size(); i++)
        {
            if(mp[nums[i]]){
                ans[mp[nums[i]] - 1].push_back(nums[i]);
                mp[nums[i]]--;
            }
        }
        return ans;
    }
};