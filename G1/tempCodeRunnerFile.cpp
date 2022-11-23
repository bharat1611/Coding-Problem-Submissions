
void inorder(TreeNode *root)
{
    if(root == NULL)
        return;
    inorder(root -> left);
    cout << root -> val << " " ;
    inorder(root -> right);
}
