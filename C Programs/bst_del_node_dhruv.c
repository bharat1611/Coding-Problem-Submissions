nodetype *inorderSuccessor(nodetype *root)
{
    nodetype *curr = root;
    while (curr && curr->left != NULL)
    {
        curr = curr->left;
    }
    return curr;
}
nodetype *deleteNode(nodetype *root, int key)
{
    if (key < root->data)
    {
        root->left = deleteNode(root->left, key);
    }
    else if (key > root->data)
    {
        root->right = deleteNode(root->right, key);
    }
    else // found the node having key value
    {
        // case 1 and case2 :- when root to be deleted have one or no child node
        if (root->left == NULL)
        {
            nodetype *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            nodetype *temp = root->left;
            free(root);
            return temp;
        }
        // case 3 :- when root to be deleted have two child nodes
        nodetype *temp = inorderSuccessor(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }

    return root;
}
