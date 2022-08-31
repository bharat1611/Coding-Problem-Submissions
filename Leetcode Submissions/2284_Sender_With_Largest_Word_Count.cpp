class Solution {
public:
    static bool comp(pair<string, int> &a, pair<string, int>&b)
    {
        if(a.second != b.second)
            return a.second > b.second;
        else
            return a.first > b.first;
    }
    
    string largestWordCount(vector<string>& messages, vector<string>& senders) { 
        int words = 0;
        map<string, int> mp;
        for(int i = 0 ; i < messages.size(); i++)
        {
            for(int j = 0 ; j < messages[i].size(); j++)
            {
                if(messages[i][j] == ' ')
                    words++; 
            }
            mp[senders[i]] += words + 1;
            words = 0;
        }
        vector<pair<string, int>> vp;
        
        for(auto i : mp)
            vp.push_back({i.first, i.second});
        
        sort(vp.begin(), vp.end(), comp);
        return vp[0].first; 
    }
};