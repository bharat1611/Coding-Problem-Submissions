class Solution {
public:
    int ans = 0;
    void buildGraph(TreeNode *root, vector<vector<int>> &adj)
    {
        if(root == NULL)
            return;
        if(root -> left)
        {
            adj[root -> val].push_back(root -> left -> val);
            adj[root -> left -> val].push_back(root -> val);
        }
        if(root -> right)
        {
            adj[root -> val].push_back(root -> right -> val);
            adj[root -> right -> val].push_back(root -> val);
        }
        buildGraph(root -> left, adj);
        buildGraph(root -> right, adj);
    }
    void bfs(vector<vector<int>> &adj, vector<bool> &visited, int start)
    {
        queue<int> q;
        q.push(start);
        while(!q.empty())
        {
            int n = q.size();
            for(int i = 0 ; i < n; i++)
            {
                int u = q.front();
                q.pop();
                visited[u] = true;
                for(int i = 0; i < adj[u].size(); i++)
                {
                    if(!visited[adj[u][i]])
                        q.push(adj[u][i]);
                }
            }
            ans++;
        }
    }
    int amountOfTime(TreeNode* root, int start) {
        vector<vector<int>> adj(100001);
        vector<bool> visited(100001, false);
        
        buildGraph(root, adj);
        bfs(adj, visited, start);
        return ans - 1;
    }
};