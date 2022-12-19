class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int> adj[n];
        for(int i = 0 ; i < edges.size(); i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        queue<int> q;
        vector<bool>isVis(n, false);
        q.push(source);
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            isVis[node] = true;
            if(isVis[destination] == true)
                return true;
            for(int i : adj[node])
            {
                if(isVis[i] == false)
                {
                    q.push(i);
                    isVis[i] = true;
                }
            }
        }
        return isVis[destination];
    }
};