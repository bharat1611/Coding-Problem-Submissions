#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<pair<int,int>> v;
    int n, weight;
    cin >> n >> weight;
    int wt, price;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> wt >> price;
        v.push_back({price, wt});
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());


    int curr_profit = 0, curr_weight = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if(curr_weight + v[i].second <= weight)
        {
            curr_profit += v[i].first;
            curr_weight += v[i].second;
        }
    }
    cout << curr_weight << "  " << curr_profit << endl;
}