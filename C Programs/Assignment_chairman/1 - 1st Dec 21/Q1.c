#include <stdio.h>
#include <stdlib.h>

 typedef struct node
 {
     int info;
     struct node *next;
 }nodetype;

 void insert(nodetype **);
 void display(nodetype *);
 int count(nodetype *);
 void count1(nodetype *,int *);

 int main()
 {
     nodetype *start=NULL;
     int ch,c=0;
     do
     {
         printf("\n1 - Insert");
         printf("\n2 - Display");
         printf("\n3 - Count nodes greater than 10000 using return statement");
         printf("\n4 - Count nodes greater than 10000 without using return statement");
         printf("\nPlease enter your choice : ");
         scanf("%d",&ch);
         switch(ch)
         {
         case 1:
            insert(&start);
            break;
         case 2:
            display(start);
            break;
         case 3:
            printf("\nThe number of nodes greater than 10000 are : %d\n",count(start));
            break;
         case 4:
            count1(start,&c);
            printf("\nThe number of nodes greater than 10000 are : %d\n",c);
            break;
         default:
            printf("\nInvalid Choice\n");
            break;
         }
     }while(ch<=4);

 }

 void insert(nodetype **start)
 {
     int num;
     printf("Enter the value to be inserted : ");
     scanf("%d",&num);
     nodetype *p=NULL;
     p=(nodetype*)malloc(sizeof(nodetype));
     if(p != NULL)
     {
         p->info=num;
         if(*start==NULL)
         {
             (*start)=p;
             (*start)->next=NULL;
         }
         else
         {
             p->next=(*start);
             (*start)=p;
         }
         printf("\nNode has been successfully added\n");
     }
     else
     {
         printf("Not Enough Memory");
     }
 }

 void display(nodetype *l)
 {
     if(l==NULL)
        printf("\nEmpty");
     else
     {
        while(l!=NULL)
        {
            printf("%d  ",l->info);
            l=l->next;
        }
     }
 }

 int count(nodetype *l)
 {
     int c=0;
     while(l!=NULL)
     {
         if(l->info>=10000)
         {
             c++;

         }
         l=l->next;
     }
     return c;
 }

 void count1(nodetype *l,int *c)
 {
     *c=0;
    while(l!=NULL)
     {
         if(l->info>=10000)
         {
             *c=*c+1;

         }
         l=l->next;
     }
 }
