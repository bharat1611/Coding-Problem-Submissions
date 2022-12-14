#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

set<vector<int>> ans;
void permutations(vector<int> arr, vector<int> level, int ind, int r, int n)
{
    if(level.size() == r)
    {
        ans.insert(level);
        return;
    }

    for(int i = 0 ; i <= ind; i++)
    {
        level.push_back(arr[i]);
        permutations(arr, level, ind + 1, r, n);
        level.pop_back();
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int r = 3;
    int n = arr.size();
    for(int i = 0 ; i <= n - r; i++)
        permutations(arr, {}, i, r, n);

    for(auto x : ans)
    {
        for(int i = 0 ; i < x.size(); i++)
        {
            cout << x[i] << " ";
        }
        cout << " || ";
    }
}