class Solution {
public:
    vector<vector<int>> ans;
    int len, i;
    
    void helper(int start, vector<int>&help, vector<int> &nums)
    {
        if(help.size() == i)
        {
            ans.push_back(help);
            return;
        }
        for(int j = start; j < len; j++)
        {
            help.push_back(nums[j]);
            helper(j + 1, help, nums);
            help.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        
        len = nums.size();
        vector<int> help;
        
        for(i = 0; i < len + 1; i++)
        {
            helper(0, help, nums);
        }
        return ans;
        
    }
};