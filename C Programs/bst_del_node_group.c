#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    struct node *left;
    int info;
    struct node *right;
}nodetype;

nodetype *create(int n)
{
    nodetype *p=NULL;
    p=(nodetype*)malloc(sizeof(nodetype));
    if(p!=NULL)
    {
    p->info=n;
    p->right=NULL;
    p->left=NULL;
    }
    else
    printf("NOT ENOUGH MEMEORY\n");
    return p;

}
void insert(nodetype **root,nodetype *temp)
{
if(temp->info>(*root)->info)
{
    if((*root)->right==NULL)
        (*root)->right=temp;
    else
        insert(&(*root)->right,temp);
}
else
{
     if((*root)->left==NULL)
        (*root)->left=temp;
    else
        insert(&(*root)->left,temp);
}
}
void inorderprint(nodetype *root)
{
if(root!=NULL)
{
    inorderprint(root->left);
    printf("%d ",root->info);
    inorderprint(root->right);
}
}

int totalnodes(nodetype *root)
{
    int c=0;
if(root!=NULL)
{
    c=totalnodes(root->left)+totalnodes(root->right)+1;
    return c;
}
else
 return 0;
}

int leafnodes(nodetype *root)
{
    if(root==NULL)
    return 0;
    if(root->left==NULL && root->right==NULL)
    return 1;
    else
    return leafnodes(root->left)+leafnodes(root->right);
}

nodetype *inorder(nodetype *root)
{
    nodetype *curr=root;
    while(curr!=NULL && curr->left!=NULL)
    {
        curr=curr->left;
    }
    return curr;
}
nodetype *deletenode(nodetype *root,int key)
{
    if(root==NULL)
        return 0;

    if(key<root->info)
       root->left=deletenode(root->left,key);
    else if(key>root->info)
        root->right=deletenode(root->right,key);
    else
    {
        if(root->left==NULL)
        {
            nodetype *p=root->right;
            free(root);
            return p;
        }
        else if(root->right==NULL)
        {
            nodetype *p=root->left;
            free(root);
            return p;
        }

        nodetype *p=inorder(root->right);
        root->info=p->info;
        root->right=deletenode(root->right,p->info);
    }
    return root;
}
int main()
{
   int num,ch,x,key;
   nodetype*root=NULL,*p=NULL;
   do
   {
       printf("\nEnter your choice\n1.For creating the tree\n2.For printing in inorder\n3.Count the total no of nodes\n4.Count the total no. of leaf nodes\n5.For deleting a node\n6.For exit\nchoice:");
       scanf("%d",&ch);
   switch(ch)
       {
   case 1:
        printf("Enter the number to be insert:");
        scanf("%d",&num);
        p=create(num);
        if(root==NULL)
            root=p;
            else
            insert(&root,p);
        break;
     case 2:
        inorderprint(root);
        break;
    case 3:
        printf("Total no. of nodes in tree is:%d\n",totalnodes(root));
        break;
    case 4:
        printf("Total no. of leaf nodes in tree is:%d\n",leafnodes(root));
        break;
    case 5:
        printf("Enter the key you want to delete:");
        scanf("%d",&key);
        deletenode(root,key);
        break;
    case 6:
        return 0;
        break;
       }
   }while(x<=5);
   return 0;
}
