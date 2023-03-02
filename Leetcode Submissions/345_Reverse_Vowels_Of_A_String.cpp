class Solution {
public:
    string reverseVowels(string s) {
        
        vector<char> v;
        for(int i = 0 ; i < s.length(); i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'
              || s[i] == 'A' || s[i] == 'E' || s[i] == 'O' || s[i] == 'I' || s[i] == 'U')
                v.push_back(s[i]);
        }
        reverse(v.begin(), v.end());
        int rev = 0;
        for(int i = 0 ; i < s.length(); i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'
              || s[i] == 'A' || s[i] == 'E' || s[i] == 'O' || s[i] == 'I' || s[i] == 'U'){
                s[i] = v[rev];
                rev++;
            }
        }
        return s;
    }
};

class Solution {
public:
    string reverseVowels(string s) {
        
        vector<char> v;
        unordered_set<char> vow = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        
        for(int i = 0 ; i < s.length(); i++)
        {
            if(vow.find(s[i]) != vow.end())
                v.push_back(s[i]);
        }
        reverse(v.begin(), v.end());
        int rev = 0;
        for(int i = 0 ; i < s.length(); i++)
        {
            if(vow.find(s[i]) != vow.end()){
                s[i] = v[rev];
                rev++;
            }
        }
        return s;
    }
};