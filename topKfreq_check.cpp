#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int k;
    cin >> k;
    unordered_map<int, int> m;
    for (int i = 0; i < nums.size(); i++)
        ++m[nums[i]];

    map<int, vector<int>, greater<int>> mp;
    for (auto e : m)
        mp[e.second].push_back(e.first);

    vector<int> ans;
    for (auto e : mp)
    {
        for (auto e2 : e.second)
        {
            ans.push_back(e2);
            if (ans.size() == k)
                break;
        }
    }
    for(int i = 0 ; i < k; i++)
        cout << ans[i] << " " << endl;
}
