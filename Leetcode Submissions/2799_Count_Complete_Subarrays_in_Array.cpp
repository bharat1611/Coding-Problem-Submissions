class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_map<int, int> mp;
        
        for(int i = 0 ; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        int n = mp.size();
        int count = 0;
        for(int i = 0 ; i < nums.size(); i++)
        {
            mp.clear();
            int j = i;
            while(j < nums.size())
            {
                mp[nums[j]]++;
                j++;
                if(mp.size() == n)
                    count++;
            }
        }
        return count;
    }
};