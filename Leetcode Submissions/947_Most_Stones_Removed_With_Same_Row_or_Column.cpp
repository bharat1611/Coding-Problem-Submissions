class Solution {
public:
    void dfs(vector<vector<int>> &stones, vector<bool>&visited, int ind)
    {
        visited[ind] = true;
        for(int j = 0 ; j < stones.size(); j++)
        {
            if(visited[j] == false and ((stones[j][0] == stones[ind][0]) or (stones[j][1] == stones[ind][1])))
                dfs(stones, visited, j);
        }
    }
    int removeStones(vector<vector<int>>& stones) {
        int n = stones.size();
        vector<bool> visited(n, false);
        int componentSize = 0;
        for(int i = 0 ; i < n; i++)
        {
            if(visited[i] == true)
                continue;
            dfs(stones, visited, i);
            componentSize++;
        }
        return n - componentSize;
    }
};

class Solution {
public:
    bool isValid(vector<int>&a, vector<int>&b)
    {
        if(a[0] == b[0])
            return true;
        if(a[1] == b[1])
            return true;
        return false;
    }
    void dfs(vector<vector<int>> &stones, vector<bool>&visited, int ind)
    {
        visited[ind] = true;
        for(int j = 0 ; j < stones.size(); j++)
        {
            if(visited[j] == false and isValid(stones[j], stones[ind]))
                dfs(stones, visited, j);
        }
    }
    int removeStones(vector<vector<int>>& stones) {
        int n = stones.size();
        vector<bool> visited(n, false);
        int componentSize = 0;
        for(int i = 0 ; i < n; i++)
        {
            if(visited[i] == true)
                continue;
            dfs(stones, visited, i);
            componentSize++;
        }
        return n - componentSize;
    }
};