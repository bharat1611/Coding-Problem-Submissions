/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int ans = 0;
    // Function to build the graph of the given tree
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
    // function to implement bfs in the graph
    
    void bfs(vector<vector<int>> &adj, vector<bool> &visited, int start)
    {
        queue<int> q;
        // We start the BFS from start node and traverse the entire graph
        // The time it takes to traverse is also the time it takes to get infected
        q.push(start);
        while(!q.empty())
        {
            int n = q.size();
            for(int i = 0 ; i < n; i++)
            {
                int u = q.front();      // Extracting the node that needs to be traversed
                q.pop();
                visited[u] = true;         // marking the currently traversed node to true
                for(int i = 0; i < adj[u].size(); i++)
                {
                     // if adjacent nodes are not visited, push them into the queue
                    if(!visited[adj[u][i]]) 
                        q.push(adj[u][i]);
                }
            }
            ans++;       // keep a count for the traversal
        }   
    }
    int amountOfTime(TreeNode* root, int start) {
        // vector to store the graph
        vector<vector<int>> adj(100001);
        // vector to check which nodes are visited
        vector<bool> visited(100001, false);
        
        buildGraph(root, adj);
        bfs(adj, visited, start);
        // return ans - 1, coz the start node is also counted in traversal, but it was already infeced
        return ans - 1;
    }
};