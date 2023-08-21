class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int count = 0;
        for(int i = 0 ; i < nums.size(); i++)
        {
            for(int j = i + 1; j < nums.size(); j++)
            {
                if(nums[i] + nums[j] < target)
                    count++;
            }
        }
        return count;
        
        
    }
};

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        int count = 0;
        for(int i = 0 ; i < nums.size(); i++)
        {
            if(mp.find(target - nums[i]) != mp.end())
                count += mp[target - nums[i]];
            mp[nums[i]]++;
        }
        return count;
    }
};