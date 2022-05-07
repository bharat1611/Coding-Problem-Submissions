#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count = 0, j = 0;
        string check = "";
        for(int i = 0 ; i < words.size(); i++)
        {
            check = words[i];
            if(s.length() < check.length()) continue;
            else
            {
                j=0;
                while(j < check.length())
                {
                    if(s[j] != check[j])
                        break;
                    j++;
                }
                if(j == check.size())
                    count++;
            }
        }
        return count;
    }
};