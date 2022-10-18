class Solution {
    public:
    string countAndSay(int n){
        if(n == 1)
            return "1";
        
        string s = countAndSay(n - 1);
        vector<pair<char, int>> v;
        int x = 0;
        while(x < s.size())
        {
            int j = x, count = 0;
            while(s[j++] == s[x]){
                count++;
            }
            v.push_back({s[x], count});
            x = j - 1;
        }
        string ans = "";
        for(auto [k, a] : v)
        {
            ans += to_string(a);
            ans += k;
        }
        return ans;
    }
};