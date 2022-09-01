class Solution
{
public:
    void helper(Node *root)
    {
        if (!root)
            return;
        Node *near_left = NULL, *curr = root->next;

        while (curr)
        {
            if (curr->left)
            {
                near_left = curr->left;
                break;
            }
            if (curr->right)
            {
                near_left = curr->right;
                break;
            }
            curr = curr->next;
        }

        if (root->left)
            root->left->next = root->right ? root->right : near_left;

        if (root->right)
            root->right->next = near_left;

        helper(root->right);
        helper(root->left);
    }
    Node *connect(Node *root)
    {
        helper(root);

        return root;
    }
};
