#include <iostream>
#include <vector>
using namespace std;
struct Node {
    int val;
    struct Node* left, *right;
};

Node *newN(int data)
{
    Node *node = (Node*)malloc(sizeof(Node)) ;
    node -> val = data;
    node -> left = node -> right = NULL;
    return node;
}
// INORDER
void morrisTraversal(Node *root)
{
    Node *curr = root;
    while(curr != NULL)
    {
        if(curr -> left == NULL){
            cout << curr -> val << " ";
            curr = curr -> right;
        }
        else
        {
            Node *prev = curr -> left;
            while(prev -> right and prev -> right != curr)
            {
                prev = prev -> right;
            }
            if(prev -> right == NULL)
            {
                prev -> right = curr;
                curr = curr -> left;
            }
            else
            {
                prev -> right = NULL;
                cout << curr -> val << " ";
                curr = curr -> right;
            }
        }
    }
}
int main()
{
    Node *root = newN(1);
    root -> left = newN(2);
    root -> right = newN(3);
    root -> left -> left = newN(4);
    root -> left -> right = newN(5);
    root -> left -> right -> right = newN(6);
    root -> right -> left = newN(7);
    root -> right -> right = newN(10);
    morrisTraversal(root);
}