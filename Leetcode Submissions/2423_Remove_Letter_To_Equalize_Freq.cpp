class Solution {
public:
    
    bool isequal(string str, int i)
    {
        str.erase(i, 1);
        unordered_map<char, int> mp;
        
        for(int i = 0 ; i < str.length(); i++)
            mp[str[i]]++;
        
        for(int i = 1 ; i < str.length(); i++)
        {
            if(mp[str[i]] != mp[str[i - 1]])
                return false;
        }
        return true;
        
    }
    bool equalFrequency(string word) {
        
        for(int i = 0 ; i < word.length(); i++)
        {
            if(isequal(word, i) == true)
                return true;
        }
        return false;
        
    }
};