class Solution
{
public:
    string frequencySort(string s)
    {
        map<char, int> mp;
        for (int i = 0; i < s.length(); i++)
            ++mp[s[i]];

        priority_queue<pair<int, char>> pq;
        for (auto i : mp)
        {
            pq.push({i.second, i.first});
        }

        string ans = "";
        while (!pq.empty())
        {
            for (int i = 0; i < pq.top().first; i++)
            {
                ans += pq.top().second;
            }
            pq.pop();
        }
        return ans;
    }
};
