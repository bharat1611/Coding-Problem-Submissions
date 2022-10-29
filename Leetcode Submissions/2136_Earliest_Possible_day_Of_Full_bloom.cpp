class Solution{
public:
    int earliestFullBloom(vector<int> &plantTime, vector<int> &growTime)
    {
        vector<pair<int, int>> v;
        int n = plantTime.size();
        for (int i = 0; i < n; i++)
        {
            v.push_back({growTime[i], plantTime[i]});
        }
        sort(v.begin(), v.end()); 
        reverse(v.begin(), v.end());
        int pt = v[0].second;
        int bloomTime = v[0].first + v[0].second;

        for (int i = 1; i < n; i++)
        {
            pt += v[i].second;
            bloomTime = max(bloomTime, pt + v[i].first);
        }

        return bloomTime;
    }
};