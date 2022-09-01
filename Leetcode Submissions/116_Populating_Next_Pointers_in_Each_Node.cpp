
class Solution {
public:
    void helper(Node *root)
    {
        if(root == NULL)
            return;
        if(root -> left == NULL)
            return;
        
        Node *currLevel = root;
        Node *nextLevel = root-> left;
        nextLevel -> next = root -> right;
        cout << currLevel -> next << " ";
        if(currLevel-> next)
        {
            currLevel -> right -> next = currLevel -> next -> left;
        }
        helper(root -> left);
        helper(root -> right);
    }
    Node* connect(Node* root) {
        cout << root -> left ->next<<endl;
        helper(root);
        
        return root;  
    }
};