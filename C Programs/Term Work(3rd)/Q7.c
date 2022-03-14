#include <stdio.h>
#include <stdlib.h>

typedef struct tree
{
    int info;
    struct tree *left,*right;
}tree;

void insert(tree**,int num);
void in_order(tree*);
int count(tree*);
int count_leaf(tree*);
int count_left(tree*);
int count_right(tree*);
int count_both(tree*);
void pre_traverse(tree*);
tree *inorderSuccessor(tree *);
tree *deleteNode(tree *,int);

int main()
{
    tree *root=NULL;
    int ch,num,key=0;
    do
    {
        printf("\n1 - Insert");
        printf("\n2 - Inorder traversal");
        printf("\n3 - Count");
        printf("\n4 - Total leaf nodes");
        printf("\n5 - Count left");
        printf("\n6 - Count right");
        printf("\n7 - Count both");
        printf("\n8 - Delete Node from the BST");
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
            in_order(root);
            break;
        case 3:
            printf("Total number of nodes are : %d ",count(root));
            break;
        case 4:
            printf("Total number of leaf nodes are : %d ", count_leaf(root));
            break;
        case 5:
            printf("Total number of nodes having only left child are : %d \n",count_left(root));
            break;
        case 6:
            printf("Total number of nodes having only right child are : %d \n",count_right(root));
            break;
        case 7:
            printf("Total number of nodes having both left and right nodes are : %d \n",count_both(root));
            break;
        case 8:
            printf("Enter the node to be deleted : ");
            scanf("%d",&key);
            root=deleteNode(root,key);
            break;
        default:
            printf("\nInvalid Choice");
            break;
        }
    }while(ch<=8);
}

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

void in_order(tree *rt)
{
    if(rt!=NULL)
    {
        in_order(rt->left);
        printf("%d   ",rt->info);
        in_order(rt->right);
    }
}

int count(tree *rt)
{
    int c=1;
    if(rt==NULL)
        return 0;
    else
    {
        c+=count(rt->left);
        c+=count(rt->right);
        return c;
    }
}
int count_left(tree *rt)
{
    int c=0;
    if(rt->left!=NULL)
        c=c+1+count_left(rt->left);
    if(rt->right!=NULL)
        c=c+count_left(rt->right);
    return c;
}

int count_right(tree *rt)
{
    int c=0;
    if(rt->left!=NULL)
        c=c+count_left(rt->left);
    if(rt->right!=NULL)
        c=1+c+count_left(rt->right);
    return c;
}
int count_both(tree *rt)
{
    int c=0;
    if(rt->left!=NULL)
        c=c+count_left(rt->left);
    if(rt->right!=NULL)
        c=1+c+count_left(rt->right);
    return c;
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

int count_leaf(tree* rt)
{
    if(rt==NULL)
    {
        return 0;
    }
    if(rt->right==NULL && rt->left==NULL)
    {
        return 1;
    }
    else
    {
        return count_leaf(rt->left)+count_leaf(rt->right);
    }
}

tree *inorderSuccessor(tree *root)
{
    tree *curr=root;
    while (curr && curr->left!=NULL)
    {
        curr=curr->left;
    }
    return curr;
}

tree *deleteNode(tree *root, int key)
{
    int c=0;
    if(key<root->info)
        root->left=deleteNode(root->left,key);
    else if(key>root->info)
        root->right=deleteNode(root->right,key);
    else// found the node having key value
    {
        c=1;
        // case 1 and case2 :- when root to be deleted have one or no child node
        if (root->left==NULL)
        {
            tree *temp=root->right;
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
