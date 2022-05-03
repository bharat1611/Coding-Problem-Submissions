#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        vector<char> s1;                // char vector for string s
        vector<char> s2;                // char vector for string t
        int i = 0;
        while(i < s.length())               // loop to iterate through string s
        {
            if(s[i] == '#' && s1.size() != 0)       // pop if '#' found
                s1.pop_back();
            else if(s[i] != '#')            // push all characters except '#'
                s1.push_back(s[i]);
            i++;
        }
        i = 0;
        while(i < t.length())               // loop to iterate over string t
        {
            if(t[i] == '#' && s2.size() != 0)       // pop if '#' is found
                s2.pop_back();
            else if(t[i] != '#')            // push all characters except '#'
                s2.push_back(t[i]);
            i++;
        }
        return s1 == s2;
    }
};