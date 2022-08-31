class Solution {

    private:
    struct Comp {
        bool operator()(const pair<int, string>& a, const pair<int, string>& b) {
            if(a.first != b.first) {
                return a.first > b.first;
            }
            else {
                return a.second < b.second;
            }
        }
    };
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string, int> mp;
        for(int i = 0 ; i < words.size(); i++)
        {
            mp[words[i]]++;
        }
        priority_queue<pair<int, string>, vector<pair<int, string>>, Comp > pq;
        for(auto i : mp)
        {
            pq.push({i.second, i.first});
            if(pq.size() > k)
                pq.pop();
        }
        vector<string> ans;
        while(!pq.empty())
        {
            ans.insert(ans.begin(), pq.top().second);
            pq.pop();
        }
        return ans;
    }
};