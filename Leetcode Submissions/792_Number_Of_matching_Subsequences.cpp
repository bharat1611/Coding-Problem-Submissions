class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        
        unordered_map<string, int> mp;
        for(auto i : words)
            mp[i]++;
        int count = 0;
        for(auto it : mp)
        {
            string str = it.first;
            int x = it.second;
            int i = 0, j = 0;
            while(i < s.size() and j < str.size())
            {
                if(s[i] == str[j])
               {
                   i++;
                   j++;
               }
               else
                   i++;
            }
            if(j == str.size())
                count += it.second;
        }
        return count;
    }
};