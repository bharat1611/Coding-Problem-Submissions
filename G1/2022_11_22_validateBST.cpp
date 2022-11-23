// Given a Binary Tree, validate whether this Binary Tree is a Binary Search Tree.

// A BST is a binary tree where for every node, each value on the left of the current node is less than itself, and on right of current node is greater than its value.

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

// The easy approach to this problem is to do an inorder traversal of the tree and store it in an array. If that inorder traversal array is sorted, then the tree is a BST otherwise it is not a BST.

// class Solution1{
//     public :
//     vector<int> v;
//     void inorder(TreeNode *root)
//     {
//         if(root == NULL)
//             return;
//         inorder(root -> left);
//         v.push_back(root -> val);
//         inorder(root -> right);
//     }
// }

// Another approach would be to check if nodes on left of the current node are less than current, and on the right are more than the current node.

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
    // Solution1 
    // Solution1 obj1;
    // obj.inorder(root);
    // cout << "This tree is a BST : " ;
    // for(int i = 0 ; i < v.size() - 1; i++)
    // {
    //     if(v[i] > v[i + 1]){
    //         cout << "False";
    //         break;
    //     }
    // }
    // cout << "True ";

    Solution obj;
    cout << "This tree is a BST : " ;
    obj.isBST(root) == true ? cout << "True " : cout << "False";

}