#include <stdio.h>
#include <stdlib.h>
 typedef struct node
 {
     int info;
     struct node *next;
 }nodetype;

 void insert(nodetype**);
 int count(nodetype*);
 void display(nodetype*);

 int main()
 {
     nodetype *p=NULL;
     int ch;
     do
     {
         printf("\n1 - Insert");
         printf("\n2 - Count the number of nodes ");
         printf("\n3 - Display");
         printf("\nPlease enter your choice : ");
         scanf("%d",&ch);
         switch(ch)
         {
         case 1:
            insert(&p);
            break;
         case 2:
            printf("\nThe total number of nodes in the linked list are : %d \n",count(p));
            break;
         case 3:
            display(p);
            break;
         default:
            printf("\nInvalid Choice");
            break;
         }
     }while(ch<=3);
 }

 void insert(nodetype** l)
 {
     int num;
     nodetype *p=NULL;
     printf("\nEnter the value to be inserted : ");
     scanf("%d",&num);
     p=(nodetype*)malloc(sizeof(nodetype));

     if(p != NULL)
     {
         p->info=num;
         if((*l)==NULL)
         {
             (*l)=p;
             (*l)->next=p;
         }
         else
         {
             p->next=(*l)->next;
             (*l)->next=p;
             (*l) = p;
         }
     }
     else
     {
         printf("\nMemory not allocated\n");
     }
 }

 int count(nodetype* l)
 {

     int c=0;
     if(l==NULL)
         return c;

     else
     {
         nodetype *temp=l->next;
         do
         {
             c++;
             temp=temp->next;
         }while(temp!=l->next);
     }
    return c;
 }

 void display(nodetype *l)
 {
     if(l!=NULL)
     {
         nodetype *temp=l->next;
         do
         {
             printf("%d  ",temp->info);
             temp=temp->next;
         }while(temp!=l->next);
         printf("\n");
     }
     else
     {
         printf("\nEmpty\n");
     }
 }
