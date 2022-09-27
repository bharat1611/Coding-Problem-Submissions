class Solution {
public:
    int countBinarySubstrings(string s) {
        int i = 1, count = 0, prev = 0, curr = 1;
        
        while(i < s.length())
        {
            if(s[i - 1] != s[i])
            {
                count = count + min(prev, curr);
                prev = curr;
                curr = 1;
            }
            else
                curr++;
            i++;
        }
        count += min(prev, curr);
        return count;
    }
};