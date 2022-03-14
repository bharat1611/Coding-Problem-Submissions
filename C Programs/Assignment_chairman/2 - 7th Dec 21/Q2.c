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
void process(nodetype**);
void display(nodetype*);

int main()
{
    nodetype *top=NULL;
    int ch;
    do
    {
        printf("\n1 - Insert");
        printf("\n2 - Process");
        printf("\n3 -");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            insert(&top);
            break;
        case 2:
            process(&top);
            break;
        case 3:
            display(top);
            break;
        }
    }while(ch<=3);
}


 void insert(nodetype** l)
 {

     static int no=0;
     int num;
     nodetype *p=NULL;
     printf("\nEnter the value to be inserted : ");
     scanf("%d",&num);
     p=(nodetype*)malloc(sizeof(nodetype));

     if(p != NULL)
     {
         p->no=p->no+1;
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

 void del(nodetype **p)
 {
     nodetype *temp=NULL,*a=NULL;
     temp=(*p);
     if(temp->next==temp)
     {
         free(temp);
         *p=NULL;
         return;
     }
     a=temp->next;
     temp->next=a->next;
     free(a);
     *p=temp;

 }


void process(nodetype **top)
{
    int t;
    scanf("%d",&t);
    nodetype* p,*f=NULL;
    p=*top;
    while(p!=NULL)
    {
        f=p->next;
        f->info=f->info-t;
        if((f->info)<=0)
        {
            printf("\nProcess %d hua",f->no);
            del(&p);
        }
        else
            p=p->next;
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
