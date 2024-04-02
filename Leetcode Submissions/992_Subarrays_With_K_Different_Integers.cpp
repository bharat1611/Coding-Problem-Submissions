class Solution {
public:
    int func(vector<int> &nums, int k)
    {
        unordered_map<int, int> mp;
        int start = 0;
        int count = 0;
        for(int end = 0; end < nums.size(); end++)
        { 
            mp[nums[end]]++;
            while(mp.size() > k)
            {
                mp[nums[start]]--;
                if(mp[nums[start]] == 0)
                    mp.erase(nums[start]);
                start++;
            }
            count += (end - start + 1);
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return func(nums, k) - func(nums, k - 1);
    }
};