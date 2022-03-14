#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int info;
    struct node *next;
}n;
void enq(n**,n**,int);
void deq(n**,n**);
void display(n*);

int main()
{
    n *l=NULL,*r=NULL;
    int num,ch;
    do
    {
    printf("\n1 - Enqueue\n2 - Dequeue\n3 - Display\nEnter your choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        printf("Enter the number to be allocated : ");
        scanf("%d",&num);
        enq(&l,&r,num);
        break;
    case 2:
        deq(&l,&r);
        break;
    case 3:
        display(l);
        break;
    }
    }while(ch<=3);
}

void enq(n ** l,n ** r,int num)
{
    n *p=NULL;
    p=(n*)malloc(sizeof(n));
    if(p==NULL)
        printf("Memory Not Allocated\n");
    else
    {
        p->info=num;
        if((*l)==NULL && (*r)==NULL)
            (*l)=(*r)=p;
        else
            {
                (*r)->next=p;
                *r=p;
            }
            (*r)->next=NULL;
    }
}
void deq(n **l,n **r)
{
    n *p=NULL;
    p=*l;
    if(*l==*r)
        printf("Queue Empty\n");
    else
    {   printf("Dequeued : %d ", p->info);
        (*l)=(*l)->next;
    }
    free(p);
}
void display(n* l)
{
    if(l==NULL)
        printf("Queue is Empty");
    else
    {
        while(l!=NULL)
        {
            printf("  %d  ",l->info);
            l=l->next;
        }
    }
}

