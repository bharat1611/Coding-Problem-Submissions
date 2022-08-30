#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long interchangeableRectangles(vector<vector<int>> &rectangles)
    {
        map<double, int> mp;
        for (int i = 0; i < rectangles.size(); i++)
        {
            mp[(1.0 * rectangles[i][0] / (1.0 * rectangles[i][1]))]++;
        }
        long long count = 0;
        long long l = 1;
        for (auto i : mp)
        {
            count += l * (i.second) * l * (i.second - 1) / 2;
        }
        return count;
    }
};