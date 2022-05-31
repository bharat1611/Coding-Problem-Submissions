class Solution {
public:
    int maxProfit(vector<int>& nums) 
    {
        int n = nums.size(), k = 0;
        vector<int> v;
        for(int i = 0 ; i < n - 1; i++)
        {
            k = i + 1;
            while(k < nums.size() && nums[i] < nums[k])
            {
                v.push_back(nums[k] - nums[i]);
                k++;
            }
        }
        if(v.size() == 0)
            return 0;
        return *max_element(v.begin(), v.end());
    }