/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        queue<Node*> q;
        q.push(root);
        vector<int> level;
        vector<vector<int>> ans;
        if(root == NULL)
            return ans;
        while(!q.empty())
        {
            int n = q.size();
            for(int i = 0 ; i < n; i++)
            {
                Node * node = q.front();
                q.pop();
                level.push_back(node -> val);
                for(auto i : node -> children)
                    q.push(i);
            }
            ans.push_back(level);
            level.clear();
        }
        return ans;
    }
};