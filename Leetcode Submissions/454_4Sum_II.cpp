class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        
        unordered_map<int, int> mp;
        for(auto i : nums3)
        {
            for(auto j : nums4)
            {
                mp[(i + j)]++;
            }
        }
        int count = 0;
        for(int i = 0 ; i < nums1.size(); i++)
        {
            for(int j = 0 ; j < nums2.size(); j++)
            {
                int sum = nums1[i] + nums2[j];
                if(mp.find(-sum) != mp.end())
                {
                    count += mp[(-sum)];
                }
            }
        }
        return count;
    }
};