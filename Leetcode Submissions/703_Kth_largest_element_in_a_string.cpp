#include <bits/stdc++.h>
using namespace std;

class KthLargest 
{
    priority_queue<int, vector<int>, greater<int>>  q;
    int size_queue ;
public:
    KthLargest(int k, vector<int>& nums) 
    {
        size_queue = k;
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            q.push(nums[i]);
            if(q.size() > size_queue)
                q.pop();
            
        }
    }
    
    int add(int val) 
    {
        q.push(val);
        if(q.size() > size_queue)
            q.pop();
        return q.top();
    }
};