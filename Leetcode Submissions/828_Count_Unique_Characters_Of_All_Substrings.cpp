// class Solution {
// public:
//     unordered_set<string> sub;
//     void cal(string s, string substr, int curr, int &n)
//     {
//         if(curr >= n)
//             return;
        
//         for(int i = curr ; i < n; i++)
//         {
//             substr += s[i];
//             sub.insert(substr);
//             cal(s, substr, i + 1, n);
//             substr.pop_back();
//         }
//     }
//     int uniqueLetterString(string s) {
//         int n = s.length();
//         cal(s, "", 0, n);
//         for (auto it = sub.begin(); it !=
//                              sub.end(); ++it)
//         cout << ' ' << *it;
//         return 0;
//     }
// };

class Solution {
public:
    int uniqueLetterString(string s) {
        
        int n = s.length();
        vector<vector<int>> mp(26);
        for(int i = 0 ; i < 26; i++)    mp[i].push_back(-1);
        
        for(int i = 0; i < s.length(); i++) 
            mp[s[i]  - 'A'].push_back(i);
        
        for(int i = 0 ; i < 26; i++)
            mp[i].push_back(n);
        
        int count = 0;
        for(int i = 0 ; i < 26; i++)
        {
            for(int j = 1; j < mp[i].size() - 1; j++)
            {
                count += (mp[i][j] - mp[i][j - 1]) * (mp[i][j + 1] - mp[i][j]);
            }
        }
        return count;
    }
};