class Solution {
public:
    vector<vector<int>> ans;
    void helper(vector<int>&nums, vector<int> level, int len, int ind)
    {
        if(ind <= len and level.size() >= 2)
        {
            ans.push_back(level);
        }
        for(int i = ind; i < len; i++)
        {
            if(level.size() == 0 || level.back() <= nums[i])
            {
                level.push_back(nums[i]);
                helper(nums, level, len, i + 1);
                level.pop_back();
            }
        }
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int> level;
        helper(nums, level, nums.size(), 0);
        sort(ans.begin(), ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());
        return ans;
        
    }
};

class Solution {
public:
    set<vector<int>> ans;
    void helper(vector<int>&nums, vector<int> level, int len, int ind)
    {
        if(ind <= len and level.size() >= 2)
        {
            ans.insert(level);
        }
        for(int i = ind; i < len; i++)
        {
            if(level.size() == 0 || level.back() <= nums[i])
            {
                level.push_back(nums[i]);
                helper(nums, level, len, i + 1);
                level.pop_back();
            }
        }
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int> level;
        helper(nums, level, nums.size(), 0);
        vector<vector<int>> v;
        for(auto i : ans)
        {
            v.push_back(i);
        }
        return v;
        
    }
};