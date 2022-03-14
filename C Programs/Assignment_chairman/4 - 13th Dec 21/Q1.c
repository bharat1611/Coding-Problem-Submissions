#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int info;
    struct node *left,*right;
}tree;

void insert(tree**,int num);
int count(tree*);

int main()
{
    tree *root=NULL;
    int ch,num;
    do
    {
        printf("\nPress 1 to Insert value in the tree");
        printf("\nPress 2 to Count total number of nodes");
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
            printf("\nTotal number of nodes are : %d \n",count(root));
            break;
        default:
            printf("\nInvalid Choice");
            break;
        }
    }while(ch<=2);
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

