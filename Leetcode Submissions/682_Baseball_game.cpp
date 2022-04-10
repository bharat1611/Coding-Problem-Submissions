#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& ops) 
    {
        int i = 0;
        vector<int> ans;                // vector to store the score of the game
        while(i < ops.size())           // traversing the string, can also use auto
        {   
            if(ops[i] == "C")           // if "C", remove the previous score
                ans.pop_back();
                
            else if(ops[i] == "D")      // if "D", record a new score that is double of previous score
                ans.push_back((ans.back() * 2));
            
            else if(ops[i] == "+")      // if "+", add new score that is sum of previous 2 scores
                ans.push_back(ans[ans.size() - 1] + ans[ans.size() - 2]);
            
            else                        // else integer value to the record
                ans.push_back(stoi(ops[i]));
            
            i++;
        }
        int score = 0;
        for(auto i : ans) score = score + i;        // calculating final score
        return score;    
    }
};