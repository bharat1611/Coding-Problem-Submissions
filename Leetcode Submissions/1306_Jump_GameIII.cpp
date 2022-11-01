class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        int n = arr.size();
        vector<bool> isVisited(n, false);
        queue<int> q;
        q.push(start);
        isVisited[start] = true;
        while(!q.empty())
        {
            int curr = q.front();
            q.pop();
            if(arr[curr] == 0)
                return true;
            isVisited[curr] = true;
            int val1 = curr + arr[curr];
            int val2 = curr - arr[curr];
            if(val1 < n and !isVisited[val1]){
                q.push(val1);
            }
            if(val2 >= 0 and !isVisited[val2]){
                q.push(val2);
            }
        }
        return false;
    }
};