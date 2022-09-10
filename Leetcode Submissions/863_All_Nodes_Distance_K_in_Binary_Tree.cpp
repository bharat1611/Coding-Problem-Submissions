/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> ans;
    // function to build the graph of the Binary Tree
    void buildGraph(TreeNode *root, vector<vector<int>>&adj)
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
    
    // Function to implement BFS in the given tree
    void bfs(vector<vector<int>> &adj, vector<bool> &visited, TreeNode *target,int k)
    {
        queue<int> q;
        int level = 0;
        // starting the BFS from the value of target node
        q.push(target -> val);
        while(!q.empty())
        {
            int n = q.size();
            for(int i = 0 ; i < n; i++)
            {
                int u = q.front();
                q.pop();
                visited[u] = true;
                // if nodes are in k distance away from the target, push them in answer
                if(k == level)
                    ans.push_back(u);
                
                for(int j = 0 ; j < adj[u].size(); j++)
                {
                    // if adjacent neighbours of curr node are not visited, push them in the queue
                    if(!visited[adj[u][j]])
                        q.push(adj[u][j]);
                }
            }
            // calculating distance from target node at every iteration
            level++;  
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        // adj matrix to store the graph
        vector<vector<int>> adj(501);
        // visited array to store the nodes that have been visited
        vector<bool> visited(501, false);
        buildGraph(root, adj);
        bfs(adj, visited, target, k);
        // return vector ans
        return ans;
    }
};