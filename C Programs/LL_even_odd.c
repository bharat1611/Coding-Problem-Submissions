#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int info;
    struct node *next;
}nodetype;

void insert(nodetype**,int);
void even_odd(nodetype**,nodetype **,nodetype **);
void display(nodetype*);

int main()
{
    nodetype *l1=NULL,*l2=NULL,*l3=NULL;
    int ch,num;
    do
    {
        printf("\n1 - Insert");
        printf("\n2- Perform the even odd operation");
        printf("\n3 - Display");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter the number to be inserted : ");
            scanf("%d",&num);
            insert(&l1,num);
            break;
        case 2:
            even_odd(&l1,&l2,&l3);
            break;
        case 3:
            printf("\nThe original linked list is : ");
            display(l1);
            printf("\n");
            printf("Even position's linked list is : ");
            display(l2);
            printf("\n");
            printf("Odd position's linked list is : ");
            display(l3);
            printf("\n");
            break;
        default:
            printf("\nInvalid Choice");
            break;
        }

    }while(ch<=3);
}

 void insert(nodetype **l,int num)
 {
     nodetype *p=NULL;
     p=(nodetype*)malloc(sizeof(nodetype));
     if(p!=NULL)
     {
         p->info=num;
         if((*l)==NULL)
         {
             (p)->next=NULL;
             (*l)=p;
         }
         else
         {
             p->next=(*l);
             (*l)=p;
         }
     }
 }
 void even_odd(nodetype **l1,nodetype** l2,nodetype **l3)
{
    nodetype *odd=NULL,*even=NULL;
    odd=(*l1);
    even=(*l1)->next;
    while(1)
    {
        insert(l2,odd->info);
        if(odd->next==NULL || odd->next->next==NULL)
        {
            break;
        }
        else
            odd=odd->next->next;
    }
    while(1)
    {
        insert(l3,even->info);
        if(even->next==NULL || even->next->next==NULL)
        {
            break;
        }
        else
            even=even->next->next;
    }
}
 void display(nodetype *l)
 {
     if(l==NULL)
     {
         printf("Empty");
         return;
     }
     else
     {
         while(l!=NULL)
         {
             printf("%d  ",l->info);
             l=l->next;
         }
     }
 }
