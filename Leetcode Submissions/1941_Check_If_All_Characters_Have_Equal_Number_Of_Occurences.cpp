class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char, int> mp;
        for(int i = 0 ; i < s.length(); i++)
        {
            mp[s[i]]++;
        }
        int num = mp[s[0]];
        for(auto i : mp)
        {
            if(i.second != num)
                return false;
        }
        return true;
    }
};