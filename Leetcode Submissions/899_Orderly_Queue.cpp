class Solution {
public:
    string orderlyQueue(string s, int k) {
        
        if(k == 1)
        {
            string ans = s;
            int n = s.length();
            for(int i = 0 ; i < n;i++)
            {
                char c = s[n - 1];
                s.pop_back();
                s = c + s;
                ans = min(s, ans);   
            }
            return ans;
        }
        sort(s.begin(), s.end());
        return s;
    }
};