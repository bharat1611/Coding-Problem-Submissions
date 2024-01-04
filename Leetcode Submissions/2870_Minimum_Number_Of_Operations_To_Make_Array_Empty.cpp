class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int i = 0 ; i < nums.size(); i++)
            mp[nums[i]]++;
        
        int count = 0;
        for(auto i: mp)
        {
            int curr = i.second;
            if(curr == 1)
                return -1;
            count += curr/3;
            if(curr%3 != 0)
                count++;
        }
        return count;
    }
};