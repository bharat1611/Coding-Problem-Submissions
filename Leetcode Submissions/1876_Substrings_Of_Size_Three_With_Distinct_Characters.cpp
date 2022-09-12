class Solution {
public:
    int countGoodSubstrings(string s) {
        
        int i = 0, j = 0;
        int count = 0;
        while(j < s.length())
        {
            if(j - i + 1 == 3)
            {
                char ch1 = s[j];
                char ch2 = s[j - 1];
                char ch3 = s[j - 2];
                if(ch1 != ch2 and ch2 != ch3 and ch1 != ch3)
                    count++;
                
                i++;
            }
            j++;
        }
        return count;
    }
};