class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int, int> mp;
        for(int i = 0 ; i < nums.size(); i++)
        {
            if((nums[i]&1) == 0)
                mp[nums[i]]++;
        }
        if(mp.size() == 0)
            return -1;
        int max_c = INT_MIN;
        for(auto i : mp)
            max_c = max(max_c, i.second);
        for(auto i : mp)
        {
            if(i.second == max_c)
                return i.first;
        }  
        return -1;
    }
};