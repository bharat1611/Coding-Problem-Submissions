#include <stdio.h>
#include <stdlib.h>

typedef struct tree
{
    int info;
    struct tree *left,*right;
}tree;

void insert(tree**,int num);
int count(tree*);
void pre_traverse(tree*);

int main()
{
    tree *root=NULL;
    int ch,num;
    do
    {
        printf("\n1 - Insert");
        printf("\n2 - Count");
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
            printf("Total number of nodes are : %d ",count(root));
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

void pre_traverse(tree *rt)
{
    if(rt!=NULL)
    {
        printf("%d   ",rt->info);
        pre_traverse(rt->left);
        pre_traverse(rt->right);
    }
}

