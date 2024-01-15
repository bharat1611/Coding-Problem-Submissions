class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int, int> mp;
        
        for(int i = 0 ; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        vector<int> ans;
        for(auto i : mp){
            if(i.second > n/3)
                ans.push_back(i.first);
        }
        return ans;
    }
};