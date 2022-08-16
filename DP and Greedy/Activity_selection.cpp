#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<pair<int, int>> v;
    int n, s, e;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s >> e;
        v.push_back({e, s});
    }
    sort(v.begin(), v.end());

    int count = 0, currEnd = -1;
    while (!v.size())
    {
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i].second > currEnd)
            {
                count++;
                currEnd = v[i].first;
                v.erase(v.begin() + i);
            }
        }
    }
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i].second << "  " << v[i].first << endl;
    // }
    cout << count << endl;
}