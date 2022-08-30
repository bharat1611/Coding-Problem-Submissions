class Solution {
public:
    static bool cmp(pair<int, int> &a, pair<int, int>&b)
    {
        if(a.first == b.first)
            return a.second > b.second;
        else
            return a.first < b.first;
    }
    
    vector<int> frequencySort(vector<int>& nums) {
        map<int, int> mp;
        for(int i = 0 ; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        vector<pair<int, int>> v;
        for(auto i : mp)
            v.push_back({i.second, i.first});
        
        sort(v.begin(), v.end(), cmp);
        vector<int> ans;
        for(auto i : v)
         {
            int a = i.first;
            int b = i.second;
            while(a > 0)
            {
                ans.push_back(b);
                a--;
            }
        }
        return ans;
    }
};