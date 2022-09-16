class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length())
            return false;
        
        sort(s1.begin(), s1.end());
        int j = s1.length() - 1, i = 0, n = s1.size();
        int m = s2.length();
        while(j < m)
        {
            string str = s2.substr(i, n);
            sort(str.begin(), str.end());
            if(str == s1)
                return true;
            i++;
            j++;
        }
        return false;
    }
};
