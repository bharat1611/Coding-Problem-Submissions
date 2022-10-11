class Solution
{
public:
    int countQuadruplets(vector<int> &nums)
    {
        int ans = 0;
        int len = nums.size();
        map<int, int> mp;
        mp[nums[len - 1]]++;
        for (int i = len - 2; i >= 0; i--)
        {
            for (int j = i - 1; j >= 0; j--)
            {
                for (int k = j - 1; k >= 0; k--)
                {
                    ans += mp[nums[i] + nums[j] + nums[k]];
                }
            }
            mp[nums[i]]++;
        }

        return ans;
    }
};
