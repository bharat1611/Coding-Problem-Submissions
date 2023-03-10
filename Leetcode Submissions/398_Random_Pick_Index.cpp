class Solution {
public:
    unordered_map<int, vector<int>> mp;
    
    Solution(vector<int>& nums) {
        for(int i = 0 ; i < nums.size(); i++)
            mp[nums[i]].push_back(i);
        
        // for(auto i : mp)
        // {
        //     cout << i.first << "->";
        //     for(auto x : i.second)
        //         cout << x << " " ;
        //     cout << endl;
        // }
    }
    
    int pick(int target) {
        vector<int> v = mp[target];
        int ran = rand() % (v.size());
        return v[ran];
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */