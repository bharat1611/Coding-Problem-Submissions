class Solution {
public:
    int maxVowels(string s, int k) {
        int i = 0, j = 0, count = 0;
        int ans = 0;
        while(j < s.length())
        {
            if(s[j] == 'a' or s[j] == 'e' or s[j] == 'i' or s[j] == 'o' or s[j] == 'u')
                count++;
            
            if(j - i + 1 < k)
                j++;
            else if(j - i + 1 == k)
            {
                ans = max(ans, count);
                if(s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u')
                    count--;
                i++;
                j++;
            }
        }
        return ans;
    }
};