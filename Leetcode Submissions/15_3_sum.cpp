class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        if(nums.size() < 3)
            return {};
        vector<vector<int>> sol;
        sort(nums.begin(), nums.end());
        int j, k , sum;
        for(int i = 0; i < nums.size() - 2; i++)
        {
            if( i == 0 || nums[i] != nums[i - 1])
            {
                j = i + 1;
                k = nums.size() - 1;
                while(j < k)
                {
                    sum = nums[i] + nums[j] + nums[k];
                    if(sum == 0)
                    {
                        sol.push_back({nums[i], nums[j], nums[k]});
                        while(j < k && nums[j] == nums[j + 1]) j++;
                        while(j < k && nums[k] == nums[k - 1]) k--;
                        j++; k--;
                    }
                    else if(sum > 0)
                        k--;
                    else
                        j++;
                }
            }
        }
        return sol;
    }
};