#include <stdio.h>
#include <stdlib.h>

typedef struct tree
{
    int info;
    struct tree *left,*right;
}tree;

void insert(tree**,int);
int count_leaf(tree*);
int count_both(tree*);
void display_inorder(tree*);
void display_postorder(tree*);
void display_preorder(tree*);

int main()
{
    tree *root=NULL;
    int num;
    printf("Insert : ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&num);
        insert(&root,num);
    }
    printf("%d",count_leaf(root));
    printf("%d",count_both(root));
    display_inorder(root);
    display_postorder(root);
    display_preorder(root);
}

void insert(tree** rt,int num)
{
    tree *p;
    if(*rt==NULL)
    {
        p=(tree*)malloc(sizeof(tree));
        p->info=num;
        p->left=p->right=NULL;
        (*rt)=p;
    }
    else
    {
        if(num<(*rt)->info)
            insert(&(*rt)->left,num);
        else
            insert(&(*rt)->right,num);
    }   
}

int count_leaf(tree *rt)
{
    if(rt==NULL)
        return 0;
    else if(rt->left==NULL && rt->right==NULL)
        return 1;
    else
        return count_leaf(rt->left)+count_leaf(rt->right);
}

int count_both(tree *rt)
{
    
}

