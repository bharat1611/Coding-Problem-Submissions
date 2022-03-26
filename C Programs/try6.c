#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int info;
    struct node *next,*rear;
}n;
n* insert(n**,n**,int);
n* del(n**,n**);
void display(n*);
void display1(n*);

int main()
{
    n *r=NULL,*l=NULL;
    int num,ch;
    do
    {
        printf("\n1 - Insert");
        printf("\n2 - Delete");
        printf("\n3 - Display as a Queue");
        printf("\n4 - Display as a Stack");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter the number to be inserted : ");
            scanf("%d",&num);
            insert(&r,&l,num);
            break;
        case 2:
            del(&l,&r);
            break;
        case 3:
            display(l);
            break;
        case 4:
            display1(r);
            break;
        }
    }while(ch<=4);
}

n* insert(n** r,n** l,int num)
{
    n* p=NULL;
    p=(n*)malloc(sizeof(n));
    if(p==NULL)
        printf("Memory not allocated");
    else
    {
        p->info=num;
        if(*r==NULL && *l==NULL)
        {
            (*r)=(*l)=p;
            p->rear=NULL;
            (*r)=p;
        }
        else
        {
            (*r)->next=p;
            p->rear=(*r);
            (*r)=p;
        }
        (*r)->next=NULL;
    }
}

n* del(n** l,n** r)
{
    n* temp=NULL;
    int c=0;
    printf("Enter the number to be deleted : ");
    scanf("%d",&c);
    if((*l)->info==c)
    {
        temp=*l;
        (*l)=(*l)->next;
        (*l)->rear=NULL;

        free(temp);
        return 0;
    }
    if((*r)->info==c)
    {
        temp=(*r);
        (*r)=(*r)->rear;
        (*r)->next=NULL;
        free(temp);
        return 0;
    }
    temp=(*l);
    while(temp!=NULL)
    {
        if(temp->info==c)
        {
            printf("YEs");
            temp->rear->next=temp->next;
            temp->next->rear=temp->rear;
            return 0;
        }
        temp=temp->next;
    }
}

void display(n* l)
{
    if(l==NULL)
        printf("Empty\n");
    else
    {
        while(l!=NULL)
        {
            printf("%d ",l->info);
            l=l->next;
        }
    }
}
void display1(n* r)
{
    if(r==NULL)
        printf("Empty\n");
    else
    {
        while(r!=NULL)
        {
            printf("%d\n",r->info);
            r=r->rear;
        }
    }
}
