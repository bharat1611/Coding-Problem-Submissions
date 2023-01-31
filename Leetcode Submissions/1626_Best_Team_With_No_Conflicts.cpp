class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        vector<pair<int, int>> v;
        for(int i = 0 ; i < scores.size(); i++)
        {
            v.push_back({ages[i], scores[i]});
        }
        sort(v.begin(), v.end());
        vector<int> dp(scores.size(), 0);
        int ans = 0;
        for(int i = 0 ; i < v.size(); i++)
        {
            dp[i] = v[i].second;
            for(int j = 0; j < i; j++)
            {
                if(v[j].second <= v[i].second)
                {
                    dp[i] = max(dp[i], dp[j] + v[i].second);
                }
            }
            ans = max(dp[i], ans);
        }
        return ans;
    }
};