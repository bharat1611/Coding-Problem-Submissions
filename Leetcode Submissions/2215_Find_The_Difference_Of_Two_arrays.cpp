class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        map<int, int> m1;
        map<int, int> m2;
        vector<int> ans1;
        vector<int> ans2;
        for(auto i : nums1)
            m1[i]++;
        for(auto i : nums2)
            m2[i]++;
        
        for(auto i : m1)
        {
            if(m2.find(i.first) == m2.end())
                ans1.push_back(i.first);
        }
        
        for(auto i : m2)
        {
            if(m1.find(i.first) == m1.end())
                ans2.push_back(i.first);
        }
        return {ans1, ans2};
    }
};