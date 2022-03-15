#include<stdio.h>
#include<stdlib.h>
typedef struct node
 {
  int info;
  struct node *left,*right;
 }tree_type;
 void insert(tree_type **,int);
 void delete_node(tree_type **,int);
 void display(tree_type *);
int main()
 {
  tree_type *root=NULL;
  int num,ch,n;
  do
  {
   printf("\n1.insert node tree");
   printf("\n2.delete node from tree");
   printf("\n3.display tree");
   printf("\nenter your choice:");
   scanf("%d",&ch);
   switch(ch)
    {
     case 1:
       printf("enter the number to be inserted:");
       scanf("%d",&num);
       insert(&root,num);
       break;
     case 2:
       printf("enter the node to be deleted:");
       scanf("%d",&n);
       delete_node(&root,n);
       break;
     case 3:
       display(root);
       break;
     default:
       printf("invalid choice");
    }
  }while(ch<=3);
 return 0;
 }
void insert(tree_type **rt,int num)
 {
  tree_type *p=NULL;
  p=(tree_type*)malloc(sizeof(tree_type));
  if(p==NULL)
   printf("memory not allocated");
  else
   {
    p->info=num;
    if(*rt==NULL)
     {
      p->left=NULL;
      p->right=NULL;
      *rt=p;
     }
    else
     {
      if(num<((*rt)->info))
        insert(&((*rt)->left),num);
      else
        insert(&((*rt)->right),num);
     }
   }
 }
void delete_node(tree_type **rt,int n)
 {
   tree_type *temp=NULL,*p=NULL;
   temp=*rt;
   while(1)
   {
       if(temp->info!=n)
      {
        delete_node(&(*rt)->left,n);
        delete_node(&(*rt)->right,n);
      }
      else
        break;
   }
  temp=temp->right;
   while((temp->left->left)!=NULL)
   {
     temp=temp->left;
   }
   (*rt)->info=temp->left->info;
     p=temp->left;
     temp->left=temp->left->right;
     free(p);
 }
void display(tree_type *rt)
 {
          if(rt!=NULL)
          {
           display(rt->left);
           display(rt->right);
           printf(" %d",rt->info);
          }
 }
