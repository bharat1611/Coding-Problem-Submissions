class Solution{
public:
    int characterReplacement(string s, int k){
        int left = 0, right = 0, len = s.length();
        unordered_map<char, int> mp;

        int maxlen = 0, mostfreq = 0;
        while (right < len)
        {
            mp[s[right]]++;
            mostfreq = max(mostfreq, mp[s[right]]);

            if (right - left + 1 - mostfreq > k)
            {
                mp[s[left]]--;
                left++;
            }
            maxlen = max(maxlen, right - left + 1);
            right++;
        }
        return maxlen;
    }
};