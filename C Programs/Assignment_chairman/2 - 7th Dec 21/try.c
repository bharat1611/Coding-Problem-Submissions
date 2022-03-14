#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    struct node *next;
    int info;
    int no;
}nodetype;
static int no=0;
void insert(nodetype **,int);
void taskprocess(nodetype **);
void display(nodetype *);
void deletenode(nodetype **);
int main()
{
    struct node *top=NULL;
    int choice,n;
    do
    {
        printf("OPERATION YOU NEED TO PERFORM : \n1.) Insert\n2.) Process schdueling\n3.) Display\n4.) EXIT\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
        {
            printf("Enter the number to be inserted :  ");
            scanf("%d",&n);
            insert(&top,n);
            break;
        }
        case 2 :
        {
            taskprocess(&top);
            break;
        }
        case 3 :
        {
            display(top);
            break;
        }
        default :
        {
            printf("invalid choice hence exit");
            break;
        }
        }
    }while(choice<=3);
}
 void insert(nodetype** l,int num)
 {

     nodetype *p=NULL;
     p=(nodetype*)malloc(sizeof(nodetype));

     if(p != NULL)
     {
         (p->no)=(p->no)+1;
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
void deletenode(nodetype **p){
    nodetype *q=*p , *r=NULL;
    if(q->next==q)
    {
        free(q);
        *p=NULL;
        return;
    }
    r=q->next;
    q->next=r->next;
    free(r);
    *p=q;

}
void taskprocess(nodetype **last)
{
    int time;
    printf("Enter the time limit for each process : ");
    scanf("%d",&time);
    nodetype *p = *last;
    while(p!=NULL)
    {
       {
           nodetype *f=p->next;
           f->info=f->info-time;
           if((f->info)<=0)
            {
                printf("\nProcess %d is Completed \n", f->no);
                deletenode(&p);
           }
           else
                p=p->next;
        }
        display(p);
    }

    printf("\n");

}
