class Solution {
public:
    bool is_Vowel(char s)
    {
        if(s == 'a' or s == 'e' or s == 'i' or s == 'o' or s == 'u')
            return true;
        return false;
    }
    int countVowelSubstrings(string word) {
        int n = word.size();
        int count = 0;
        for(int i = 0 ; i < n;  i++)
        {
            unordered_set<char> st;
            for(int j = i; j < n; j++)
            {
                if(is_Vowel(word[j]))
                    st.insert(word[j]);
                else
                    break;
                if(st.size() >= 5)
                    count++;
            }
        }
        return count;
    }
};