#include <stdio.h>
#include <stdlib.h>
typedef struct tree
{
    int info;
    struct tree *left,*right;
}tree;

void insert(tree** rt,int num)
{
    tree* p;
    if(*rt==NULL)
    {
        p=(tree*)malloc(sizeof(tree));
        p->info=num;
        (p)->left=(p)->right=NULL;
        *rt=p;
    }
    else
    {
        if(num<(*rt)->info)
            insert(&(*rt)->left,num);
        else
            insert(&(*rt)->right,num);
    }
}

tree *inorderSuccessor(tree *root)
{
    tree *curr = root;
    while (curr && curr->left != NULL)
    {
        curr = curr->left;
    }
    return curr;
}

tree *deleteNode(tree *root, int key)
{
    if (key < root->info)
        root->left = deleteNode(root->left, key);
    else if (key > root->info)
        root->right = deleteNode(root->right, key);
    else // found the node having key value
    {
        // case 1 and case2 :- when root to be deleted have one or no child node
        if (root->left == NULL)
        {
            tree *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            tree *temp = root->left;
            free(root);
            return temp;
        }
        // case 3 :- when root to be deleted have two child nodes
        tree *temp = inorderSuccessor(root->right);
        root->info = temp->info;
        root->right = deleteNode(root->right, temp->info);
    }
    return root;
}
void pre_traverse(tree *rt)
{
    if(rt!=NULL)
    {
        printf("%d   ",rt->info);
        pre_traverse(rt->left);
        pre_traverse(rt->right);
    }
}

int main()
{
    tree *root=NULL;
    int ch,num,key;
    do
    {
        printf("\n1 - Insert");
        printf("\n2 - Delete Node");
        printf("\n3 - Pre order Traversal");
        printf("\nEnter you choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter the number to be inserted : ");
            scanf("%d",&num);
            insert(&root,num);
            break;
        case 2:
            printf("Enter the number to be deleted : ");
            scanf("%d",&key);
            root=deleteNode(root,key);
            break;
        case 3:
            pre_traverse(root);
            break;
        default:
            printf("\nInvalid Choice");
            break;
        }
    }while(ch<=3);
}

