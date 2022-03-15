#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int info;
    int no;
    struct node *next;
}nodetype;

void insert(nodetype**);
void del(nodetype**);
void display(nodetype*);

int main()
{
    nodetype *top=NULL;
    int ch;
    do
    {
        printf("\n1 - Insert");
        printf("\n2 - Delete");
        printf("\n3 - Display");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            insert(&top);
            break;
        case 2:

            break;
        case 3:
            display(top);
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

