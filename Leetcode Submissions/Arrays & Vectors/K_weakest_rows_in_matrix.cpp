#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int i,j, count;
        vector<pair<int,int>> v;
        vector<int> result;
        
        for(i = 0; i < mat.size(); i++)
        {
            count = 0;
            for(j = 0 ; j <mat[i].size(); j++)
            {
                if(mat[i][j] == 1)
                {
                    count++;
                }
                else
                    break;
            }
            v.push_back(make_pair(count , i));
        }
        sort(v.begin(),v.end());

        for(i = 0 ; i < k; i++)
            result.push_back(v[i].second);

        return result;
           
    }
};