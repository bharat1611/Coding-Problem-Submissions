class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> v;
        for(int i = 0; i < timePoints.size(); i++)
        {
            int hour = stoi(timePoints[i].substr(0, 2));
            int minu = stoi(timePoints[i].substr(3, 5));
            v.push_back(hour*60 + minu);
        }
        sort(v.begin(), v.end());
        int ans = INT_MAX;
        for(int i = 1; i < v.size(); i++)
        {
            if(v[i] - v[i - 1] < ans)
                ans = v[i] - v[i - 1];
        }
        ans = min(ans, v.front() + 1440 - v.back());
        return ans;
    }
};