class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {

        vector v;
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }

        for (int i = 1; i <= nums.size(); i++)
        {
            if (mp[i] == 0)
            {
                v.push_back(i);
            }
        }
        return v;
    }
};