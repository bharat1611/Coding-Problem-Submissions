class Solution {
public:
    int maximumGap(vector<int>& nums) 
    {
        map<int, int> m;
        for(int i = 0 ; i < nums.size(); i++)
            m[nums[i]]++;
        
        int max = 0;
        vector<int> v;
        for(auto i : m)
        {
           v.push_back(i.first); 
        }
        for(int i = 0 ; i < v.size() - 1; i++)
        {
            if(v[i + 1] - v[i] >= max)
                max = v[i + 1] - v[i];
        }
        return max;
    }
};