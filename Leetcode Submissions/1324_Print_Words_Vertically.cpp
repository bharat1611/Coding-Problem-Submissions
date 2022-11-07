class Solution {
public:
    vector<string> printVertically(string s) {
        int m = s.length(), n = INT_MIN;
        stringstream ss(s);
        string word = "";
        vector<string> words;
        while(ss >> word)
        {
            int curr = word.length();
            n = max(n, curr);
            words.push_back(word);
        }
        m = words.size();
        vector<vector<char>> v(m, vector<char> (n, ' '));
        
        for(int i = 0 ;i < m; i++)
        {
            int l = words[i].length();
            for(int j = 0 ; j < l; j++)
                v[i][j] = words[i][j];
        }
        vector<string> ans;
        string present = "";
        for(int j = 0; j < n; j++)
        {
            present = "";
            for(int i = 0; i < m; i++)
            {
                present += v[i][j];
            }
            int len = present.size() - 1;
            while(present[len] == ' ' and len >= 0)
            {
                present.pop_back();
                len--;
            }
            ans.push_back(present);
        }
        return ans;
    }
};