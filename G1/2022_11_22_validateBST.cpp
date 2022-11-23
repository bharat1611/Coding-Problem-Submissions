// Given a Binary Tree, validate whether this Binary Tree is a Binary Search Tree.

// A BST is a bianry tree where for every node, each value on the left of the current node is less than itself, and on right of current node is greater than its value.

#include <iostream>
#include <climits>
using namespace std;

struct TreeNode {
    int val;
    struct TreeNode *left, *right;
};
TreeNode *newN(int data)
{
    TreeNode *node = (TreeNode*)malloc(sizeof(TreeNode));
    node -> val = data;
    node -> left = node -> right = NULL;
    return (node);
}

class Solution{
    public:
    bool isBST(TreeNode *root)
    {
        return isBSTUtils(root, INT_MIN, INT_MAX);
    }
    bool isBSTUtils(TreeNode *root, int low, int high)
    {
        if(root == NULL)
            return true;
        if(root -> val <= low || root -> val >= high)
            return false;
        return isBSTUtils(root -> left, low , root -> val) and isBSTUtils(root -> right, root -> val, high);
    }
};

int main()
{
    TreeNode *root = newN(5);
    root -> left = newN(2);
    root -> left -> left = newN(1);
    root -> left -> right = newN(4);
    root -> right = newN(8);
    root -> right -> left = newN(7);
    root -> right -> right = newN(10);
    Solution obj;
    cout << "This tree is a BST : " ;
    obj.isBST(root) == true ? cout << "True " : cout << "False";

}