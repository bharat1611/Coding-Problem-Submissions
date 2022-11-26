class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char, int> mp;
        for(auto word : words)
        {
            for(auto i : word)
                mp[i]++;
        }
        int n = words.size();
        for(auto i : mp)
        {
            if((i.second%n) != 0)
                return false;
        }
        return true;
    }
};