#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) 
    {
        priority_queue<int> q;              //using priority queue named q
        for(int i = 0; i< stones.size(); i++)
            q.push(stones[i]);              // pushing values in priority queue
        
        int n = q.size();
        while(n > 1)
        {
            int a = q.top();                // storing heaviest stone in a
            q.pop();
            int b = q.top();                // storing 2nd heaviest stone in b
            q.pop();
            q.push(a - b);                  // since queue is sorted, a<b, so we push a-b
            n = q.size();                   // updating size of n 
        }
        return q.top();                     // return if atmost one stone is left, otherwise null
    }
};