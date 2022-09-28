class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int, int> mp;
        int repeat = 0, missing = 0;
        for(int i = 0 ; i < nums.size(); i++)
        {
            if(mp.find(nums[i]) != mp.end())
                repeat = nums[i];
            mp[nums[i]] = i;
        }
        for(int i = 1; i <= nums.size(); i++)
        {
            if(mp.find(i) == mp.end()){
                missing = i;
                break;
            }
        }
        return {repeat, missing};
    }
};