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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth == 1)
        {
            // mentioned in the question, original tree will be the newroot's left subtree
            TreeNode *newN = new TreeNode(val);
            newN -> left = root;
            return newN;    // returning new Node
        }
        
        int level = 0;      // to count the level/depth we are in
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int n = q.size();
            level++;        // incrementing level
            for(int i = 0 ; i < n; i++)
            {
                TreeNode *node = q.front();
                q.pop();
                if(level != depth - 1)  // if not required level, then normally push values in Queue
                {
                    if(node -> left)
                        q.push(node -> left);
                    if(node -> right)
                        q.push(node -> right);
                }
                else        // if at required level
                {
                    // create a left node, that will be attached to current's left
                    TreeNode *l = new TreeNode(val);
                    l -> left = node -> left;
                    node -> left = l;
                    // create a right node, that will be attached to currents's right
                    TreeNode *r = new TreeNode(val);
                    r -> right = node -> right;
                    node -> right = r;
                }
            }
        }
        return root;    // return root
    }
};