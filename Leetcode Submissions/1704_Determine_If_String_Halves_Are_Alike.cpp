class Solution {
public:
    bool halvesAreAlike(string s) {
        unordered_set<char> st = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int n = s.length();
        int count = 0;
        for(int i = 0 ; i < n; i++)
        {
            if(i < n/2 and st.find(s[i]) == st.end())
                count++;
            if(i >= n/2 and st.find(s[i]) == st.end())
                count--;
        }
        return count == 0;
    }
};