class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mp;
        for(int i = 0 ; i < s.length(); i++)
            mp[s[i]]++;

        bool odd = false;
        int count = 0;
        for(auto i : mp)
        {
            if(i.second % 2 == 1){
                count += i.second - 1;
                odd = true;
            }
            if(i.second % 2== 0)
                count += i.second;
        }
        if(odd)
            count++;
        return count;
    }
};