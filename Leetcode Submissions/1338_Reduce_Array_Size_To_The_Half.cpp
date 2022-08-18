class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int, int> mp;
        
        for(int i = 0; i < arr.size(); i++)
        {
            mp[arr[i]]++;
        }
        priority_queue<int> q;
        
        int n = arr.size();
        for(auto i : mp)
            q.push(i.second);
        
        int sum = 0, count = 0;
        while(!q.empty())
        {
            sum = sum + q.top();
            q.pop();
            count++;
            if(sum >= n/2)
                break;
        }
        return count;  
    }
};