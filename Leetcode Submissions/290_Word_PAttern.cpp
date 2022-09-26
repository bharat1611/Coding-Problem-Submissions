class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> strs;
        string str = "";
        for(int i = 0 ; i < s.size(); i++)
        {
            
            if(s[i] == ' ')
            {
                strs.push_back(str);
                str = "";
            }
            else 
                str += s[i];
        }
        strs.push_back(str);
        if(pattern.size() != strs.size())
            return false;
        
        unordered_map<char,string> mp;
        set<string> st;
        
        for(int i = 0 ; i < pattern.size(); i++)
        {
            if(mp.find(pattern[i]) != mp.end())
            {
                if(mp[pattern[i]] != strs[i]){
                    return false;
                }
            }
            else
            {
                if(st.count(strs[i]) > 0)
                   return false;
                mp[pattern[i]] = strs[i];
                st.insert(strs[i]);
            }
        }
        return true;
    }
};