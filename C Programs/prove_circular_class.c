#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int info;
    struct node *next;
}n;

void insert(n**);
void display(n*);

int main()
{
    n *last=NULL;
    int ch;
    do
    {
        printf("\n1 - Insert");
        printf("\n2- Display");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            insert(&last);
            break;
        case 2:
            display(last);
            break;
        }
    }while(ch<=2);
}


 void insert(n** l)
 {
     int num;
     n *p=NULL;
     printf("\nEnter the value to be inserted : ");
     scanf("%d",&num);
     p=(n*)malloc(sizeof(n));

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

 void display(n *l)
 {
     n *temp=l->next;
     if(l!=NULL)
     {

         do
         {
             printf("%d  ",temp->next);
             temp=temp->next;
         }while(temp!=l->next);
         printf("\n");
     }

     else
     {
         printf("\nEmpty\n");
     }
     printf("%d  ",temp->next);
 }


