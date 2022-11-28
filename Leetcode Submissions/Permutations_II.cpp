class Solution {
public:
    vector<vector<int>>ans;
    set<vector<int>> st;
    // void print(vector<int>nums)
    // {
    //     for(int i=0; i<nums.size(); i++)
    //         cout<<nums[i]<<" ";
    //     cout<<endl;
    // }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        if(nums.size()==1)
        {
            ans.push_back(nums);
            return ans;
        }
        int index=0;
        solve(nums,index);
        for(auto i : st)
            ans.push_back(i);
        return ans;
    }
    void solve(vector<int>& nums, int index)
    {
        if(index>=nums.size())
        {
            if(st.find(nums) == st.end())
                st.insert(nums);
            return;
        }
        solve(nums, index+1);
        for(int i=index+1; i<nums.size(); i++)
        {
            if(nums[i]!=nums[index])
            {
                swap(nums[index], nums[i]);
                solve(nums,index+1);
                swap(nums[index], nums[i]);  
            }
        }
    }
};