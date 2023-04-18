class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        string ans = "";
        int m = word1.size(), n = word2.size();
        if(m == 0) return word2;
        if(n == 0) return word1;
        int i = 0, j = 0;
        while(i < m and j < n)
        {
            ans += word1[i];
            ans += word2[j];
            i++, j++;
        }
        while(i < m)
        {
            ans += word1[i];
            i++;
        }
        while(j < n)
        {
            ans += word2[j];
            j++;
        }
        return ans;
        
    }
};