#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<pair<int,int>> v;
    int profit, deadline;
    int n;
    cin >> n;
    for(int i = 0 ; i < n; i++)
    {
        cin >> profit >> deadline;
        v.push_back({profit, deadline});
    }

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    // for(int i = 0 ; i < v.size(); i++)
    // {
    //     cout << v[i].first << " " << v[i].second << endl;
    // }

    int maxDeadline = -1;
    for(int i = 0 ; i < n; i++)
    {
        if(maxDeadline < v[i].second)
            maxDeadline = v[i].second;
    }
    int filled[maxDeadline];
    for(int i = 0 ; i < maxDeadline; i++)
    {
        filled[i] = -1;
    }
    int count = 0, maxProfit = 0;
    for(int i = 0 ; i < n; i++)
    {
        int j = v[i].second - 1;
        while(j >= 0 && filled[j] != -1 )
            j--;

        if(j >= 0 && filled[j] == -1)
        {
            filled[j] = i;
            maxProfit += v[i].first;
            count++;
        }
    }
    cout << maxProfit << " " << count << " "<<endl;

}