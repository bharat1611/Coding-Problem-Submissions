class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> mp;
        int max_f = INT_MIN;
        for(int i = 0 ;i < nums.size(); i++){
            mp[nums[i]]++;
            if(mp[nums[i]] > max_f){
                max_f = mp[nums[i]];
            }
        }
        int count = 0;
        for(auto i : mp){
            if(i.second == max_f)
                count += i.second;
        }
        return count;
    }
};