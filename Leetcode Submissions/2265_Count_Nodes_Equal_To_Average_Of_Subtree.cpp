class Solution {
public:
    int count = 0;
    pair<int, int> helper(TreeNode *root, int &count)
    {
        if(root == NULL)
        {
            return {0,0};
        }
        pair<int, int> l = helper(root -> left, count);
        pair<int, int> r = helper(root -> right, count);
        
        int no_of_nodes = l.first + r.first + 1;
        int sum = l.second + r.second + root -> val;
        if(sum/no_of_nodes == root -> val)
            count++;
        
        return {no_of_nodes, sum};
    }
    int averageOfSubtree(TreeNode* root) {
        int count = 0;
        helper(root, count);
        return count;
    }
};