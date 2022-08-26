#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        priority_queue<pair<int, int>> mp;
        for(int i = 0 ; i < arr.size(); i++)
        {
            int p = abs(arr[i] - x);
            mp.push({p, arr[i]});
            
            if(mp.size() > k)
                mp.pop();
        }
        vector<int> v;
        
        while(!mp.empty())
        {
            v.push_back(mp.top().second);
            // cout << mp.top().first << " " << mp.top().second << endl;
            mp.pop();
        }
        
        sort(v.begin(), v.end());
        return v;
    }
};