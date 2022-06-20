
#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int>q;
    vector<int>nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    for(int i = 0 ; i < nums.size(); i++)
         q.push(nums[i]);
    while(!q.empty())
    {
        int a = q.top();
        q.pop();
        int b = q.top();
        cout<<a<< " , " << b << " ||";
        if(a == b)
            cout<<"Yes";

    }
  return false;
}
        