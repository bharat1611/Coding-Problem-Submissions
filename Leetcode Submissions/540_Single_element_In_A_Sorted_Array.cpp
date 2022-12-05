class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size() == 1)
            return nums[0];
        unordered_map<int, int> mp;
        for(auto i : nums)
            mp[i]++;
        for(auto i : mp)
            if(i.second == 1)
                return i.first;
        return 0;
    }
};