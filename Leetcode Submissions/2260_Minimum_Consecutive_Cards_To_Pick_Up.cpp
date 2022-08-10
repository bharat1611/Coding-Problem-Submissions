#include <vector>
class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        
        vector<pair<int, int>> v;
        for(int i = 0 ; i < cards.size(); i++)
        {
            v.push_back(make_pair(cards[i], i));
        }
        
        sort(v.begin(), v.end());
        
        int min = INT_MAX;
        for(int i = 0 ; i < v.size()- 1; i++)
        {
            if(v[i].first == v[i + 1].first && abs(v[i + 1].second - v[i].second) <= min)
                min = abs(v[i + 1].second - v[i].second);
        }
        if(min != INT_MAX)
            return min + 1;
        
        return -1;
    }
};