class Solution
{
public:
    bool canReorderDoubled(vector<int> &arr)
    {
        sort(arr.begin(), arr.end(), [](int a, int b)
             {
            if(a<0 && b<0)
                return a>b;
            else 
                return a<b; });
        map<int, int> mp;
        for (auto x : arr)
            mp[x]++;

        vector<int> ans;
        for (int i = 0; i < arr.size(); i++)
        {
            if (mp[arr[i]] == 0)
                continue;
            if (mp[2 * arr[i]] == 0)
                return false;

            mp[2 * arr[i]]--;
            mp[arr[i]]--;
        }

        return true;
    }
};