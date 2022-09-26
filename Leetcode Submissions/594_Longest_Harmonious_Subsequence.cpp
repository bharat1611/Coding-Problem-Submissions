class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        unordered_map<int, int> mp;
        for(int i = 0 ; i < nums.size(); i++)
            mp[nums[i]] = i;
        int max_e = 0;
        for(int i = 0 ; i < nums.size(); i++)
        {
            if(mp.find(nums[i] + 1) != mp.end())
                max_e = max(max_e, mp[nums[i] + 1] - i + 1);
        }
        return max_e;
    }
};