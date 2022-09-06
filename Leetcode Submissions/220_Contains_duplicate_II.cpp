class Solution
{
public:
    bool containsNearbyAlmostDuplicate(vector<int> &nums, int k, int t)
    {
        vector<pair<long, long>> v;
        for (int i = 0; i < nums.size(); i++)
        {
            v.push_back({nums[i], i});
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (abs(v[i].first + t >= v[j].first))
                {
                    if (abs(v[i].second - v[j].second) <= k)
                        return true;
                }
                else
                    break;
            }
        }
        return false;
    }
};