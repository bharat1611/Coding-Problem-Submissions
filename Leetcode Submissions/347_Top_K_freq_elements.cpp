class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        unordered_map<int,int>m;
        for(int i = 0 ; i < nums.size(); i++)
            ++m[nums[i]];
        
        map<int, vector<int>, greater<int>> mp;
        for(auto e : m)
            mp[e.second].push_back(e.first);
        
        vector<int> ans;
        for(auto e : mp)
        {
            for(auto e2 : e.second)
            {
                ans.push_back(e2);
                if(ans.size() == k)
                    return ans;
            }
        }
        return {};
    }
};

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(int i = 0 ; i < nums.size(); i++)
            mp[nums[i]]++;
        
        vector<pair<int, int>> v;
        for(auto i : mp)
        {
            v.push_back({i.second, i.first});
        }
        sort(v.rbegin(), v.rend());
        vector<int> ans;
        for(int i = 0 ; i < k; i++)
        {
            ans.push_back(v[i].second);
        }
        return ans;
    }
};