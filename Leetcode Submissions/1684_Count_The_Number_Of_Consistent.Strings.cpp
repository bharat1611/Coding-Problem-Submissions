class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        map<char, int> mp;
        
        for(int i = 0 ; i < allowed.length(); i++)
            mp[allowed[i]]++;
        bool flag = true;
        int count = 0;
        for(int i = 0 ; i < words.size(); i++)
        {
            for(int j = 0 ; j < words[i].length(); j++)
            {
                if(mp.find(words[i][j]) == mp.end())
                    flag = false;
            }
            if(flag)
                count++;
            flag = true;
        }
        return count;
    }
};