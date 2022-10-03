#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, k, t;
    cin >> n >> m >> k >> t;
    vector<int> v1(n, 0), v2(m, 0);
    int a, b;
    for (int i = 0; i < k; i++)
    {
        cin >> a >> b;
        v1[a - 1]++;
        v2[b - 1]++;
    }
    int ans = 0;
    for(auto i : v1)
        cout << i << " " ;
    cout << endl;
    for(auto i : v2)
        cout << i << " " ;
    for (int i = 0; i < n; i++)
    {
        if(v1[i] % t == 0)
            ans += 0;
        if (v1[i] % t != 0)
            ans += ((v1[i] / t + 1) - (v1[i] / t));
    }
    for (int i = 0; i < m; i++)
    {
        if(v2[i] % t == 0)
            ans += 0;
        if (v2[i] % t != 0)
            ans += ((v2[i] / t + 1) - (v2[i] / t));
    }
    cout << endl << ans << endl;
}