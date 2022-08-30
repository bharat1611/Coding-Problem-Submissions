class Solution {
public:
    int percentageLetter(string s, char letter) {
        vector<int> v(27, 0);
        int n = s.length();
        // counting freq of each character
        for(int i = 0 ; i < n; i++)
        {
            v[s[i] - 'a']++;
        }
        // checking freq of the required character
        int char_freq = v[letter - 'a'];
        // calculating percentage
        int ans = ((char_freq*1.0) / n) * 100;
        return ans;
    }
};