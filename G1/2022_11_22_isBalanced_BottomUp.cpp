// Given a Binary Tree, check whether the given Tree is A Balanced Binary Tree of not.

// A Balanced Binary Tree is a binary tree in which at any node, the height of left subtree and right subtree is not greater than to 1.

#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    struct TreeNode *left, *right;
};

struct TreeNode * newN(int data)
{
    TreeNode *node = (TreeNode*)malloc(sizeof(TreeNode));
    node -> val = data;
    node -> left = node -> right = NULL;
    return (node);
}

class Solution{
    public:
    int isBalancedUtils(TreeNode *root)
    {
        if(root == NULL)
            return -1;
        int left_h = isBalancedUtils(root -> left);
        if(left_h == -2)
            return -2;
        int right_h = isBalancedUtils(root -> right);
        if(right_h == -2)
            return -2;
        if(abs(left_h - right_h) > 1)
            return -2;
        return 1 + max(left_h, right_h);
    }
    bool isBalanced(TreeNode *root)
    {
        return isBalancedUtils(root) != -2;
    }
};

int main()
{
    TreeNode *root = newN(1);
    root -> left = newN(3);
    root -> right = newN(4);
    root -> left -> right = newN(8);
    root -> left -> left = newN(10);
    root -> left -> right -> right = newN(2);
    Solution obj;
    cout << "This tree is a Balanced Tree : ";
    obj.isBalanced(root) == true ? cout << "True" : cout << "False";
}