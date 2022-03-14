#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int info;
    struct node *left,*right;
}tree;

void insert(tree**,int);
int count_leaf(tree*);

int main()
{
    tree *root=NULL;
    int ch,num;
    do
    {
        printf("\nPress 1 to insert value in the tree");
        printf("\nPress 2 to count the number of leaf nodes ");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter the value to be inserted  : ");
            scanf("%d",&num);
            insert(&root,num);
            break;
        case 2:
            printf("\nTotal number of leaf nodes are : %d \n",count_leaf(root));
            break;
        default:
            printf("\nInvalid choice");
            break;
        }
    }while(ch<=2);
}

void insert(tree **rt,int num)
{
    tree *p=NULL;
    if(*rt==NULL)
    {
        p=(tree*)malloc(sizeof(tree));
        p->info=num;
        p->left=p->right=NULL;
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
