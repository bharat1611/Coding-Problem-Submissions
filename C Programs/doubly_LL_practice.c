#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int info;
    struct node *next,*prev;
}n;

void insert(n**,n**,int);
void del(n**,n**);
void disp1(n*);
void disp2(n*);

int main()
{
    n *l=NULL,*r=NULL;
    int num,ch;
    do
    {
        printf("\n1 - Insert");
        printf("\n2 - Delete");
        printf("\n3 - Display as a stack");
        printf("\n4 - Display as  a queue");
        printf("\nEnter your choice : " );
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter the number to be inserted : ");
            scanf("%d",&num);
            insert(&l,&r,num);
            break;
        case 2:
            del(&l,&r);
            break;
        case 3:
            disp1(r);
            break;
        case 4:
            disp2(l);
            break;
        }
    }while(ch<=4);
}

void insert(n** l,n** r,int num)
{
    n* p=NULL;
    p=(n*)malloc(sizeof(n));
    if(p==NULL)
    {
        printf("Memory not allocated \n");
    }
    else
    {
        p->info=num;
        if(*l==NULL && *r==NULL)
        {
            (*l)=(*r)=p;
            (*l)->prev=NULL;
        }
        else
        {
            (*r)->next=p;
            p->prev=(*r);
            (*r)=p;
        }
        (*r)->next=NULL;
    }
}
void del(n** l,n**r)
{
    n* temp=NULL;
    int x=0;
    printf("Enter the node to be deleted : " );
    scanf("%d",&x);
    if((*l)==(*r))
        (*l)=(*r)=NULL;
    else
    {
            if((*l)->info==x)
    {
        temp=(*l);
        (*l)=(*l)->next;
        (*l)->prev=NULL;
    }
    else if((*r)->info==x)
    {
        temp=(*r);
        (*r)=(*r)->prev;
        (*r)->next=NULL;
    }
    else
    {
        temp=(*l);
        while(temp!=(*r))
        {
            if(temp->info==x)
            {
                temp->prev->next=temp->next;
                temp->next->prev=temp->prev;
            }
            temp=temp->next;
        }
    }
    free(temp);
    }
}
void disp1(n* r)
{
    if(r==NULL)
    {
        printf("\nEmpty");
    }
    else
    {
        while(r!=NULL)
        {
            printf("%d\n",r->info);
            r=r->prev;
        }
    }
}
void disp2(n* l)
{
    if(l==NULL)
        printf("Empty\n");
    else
    {
        while(l!=NULL)
        {
            printf("%d  ",l->info);
            l=l->next;
        }
    }
}
