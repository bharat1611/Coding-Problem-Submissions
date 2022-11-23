// Given a Binary Tree, check whether the given Tree is A Balanced Binary Tree of not.

// A Balanced Binary Tree is a binary tree in which at any node, the height of left subtree and right subtree is not greater than to 1.

#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right;
};
    TreeNode *newN(int data)
    {
        TreeNode* node = (TreeNode*)malloc(sizeof(TreeNode));
        node -> val = data;
        node -> left = NULL;
        node -> right = NULL;
        return (node);
    }
class Solution
{
    public:
    bool check(TreeNode *root)
    {
        if(root == NULL)
            return true;
        int leftH = height(root -> left);
        int rightH = height(root -> right);
        if(abs(leftH - rightH) > 1)
            return false;
        return check(root -> left) and check(root -> right);
    }

    int height(TreeNode *root)
    {
        if(root == NULL)
            return 0;
        int left_tree = height(root -> left);
        int right_tree = height(root -> right);
        return 1 + max(left_tree, right_tree);
    }
};
int main()
{
    struct TreeNode *root = newN(1);
    root -> left = newN(2);
    root -> right = newN(3);
    root -> right -> right = newN(4);
    root -> right -> right -> right = newN(4);
    root -> right -> right -> right -> left = newN(6);

    Solution obj;
    cout << "Height of the tree given is : "  << obj.height(root) << endl;
    cout << "This tree is a balanced Tree : ";
    obj.check(root) == true ? cout << "True" : cout << "False";
}

// cout << "Inorder : " << endl;
    //  inorder(root);


// void inorder(TreeNode *root)
// {
//     if(root == NULL)
//         return;
//     inorder(root -> left);
//     cout << root -> val << " " ;
//     inorder(root -> right);
// }
