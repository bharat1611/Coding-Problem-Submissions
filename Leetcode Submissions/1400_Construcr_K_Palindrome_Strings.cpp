class Solution {
public:
    bool canConstruct(string s, int k) {
        int n = s.length();
         if(n < k)
             return false;
        unordered_map<char, int> mp;
        for(int i = 0 ; i < n; i++)
            mp[s[i]]++;
        int countOdd = 0;
        for(auto i : mp)
        {
            if(i.second % 2 != 0)
                countOdd++;
        }
        if(countOdd > k)
            return false;
        return true;
    }
};