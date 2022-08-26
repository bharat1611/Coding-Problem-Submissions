#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int, int> winners;
        map<int, int> losers;
        
        for(int i = 0 ; i < matches.size(); i++)
        {
            winners[matches[i][0]]++;
            losers[matches[i][1]]++;
        }
        
        vector<int> v1;
        vector<int> v2;
        
        for(auto i : winners)
        {
            if(losers.find(i.first) == losers.end())
            {
                v1.push_back(i.first);
            }
        }
        for(auto i : losers)
        {
            if(i.second == 1)
                v2.push_back(i.first);
        }
        // sort(v1.begin(), v1.end());
        // sort(v2.begin(), v2.end());
//         for(auto i : winners)
//             cout << i.first << " " << i.second << endl;
        
//         for(auto i : losers)
//             cout << i.first << " " << i.second << endl;
        return {v1,v2};
        
    }
};