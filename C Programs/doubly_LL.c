#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int info;
    struct node *next,*prev;
}n;

n* Insert(n*,int);
void display(n*);
void display1(n*);

int main()
{
    n* f=NULL,*r=NULL;
    int ch,num;
    do
    {
        printf("\n1 - Insert");
        printf("\n2 - Display as a Stack");
        printf("\n3 - Display as a Queue");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter the number to be inserted : ");
            scanf("%d",&num);
            r=Insert(r,num);
            if(f==0)
                f=r;
                break;
        case 2:
            display(r);
            break;
        case 3:
            display1(f);
            break;
        }
    }while(ch<=3);
}

n* Insert(n* r,int num)
{
    n* p=NULL;
    p=(n*)malloc(sizeof(n));
    if(p==NULL)
        printf("Not Enough Memory\n");
    else
    {
        p->info=num;
        if(r==NULL)
        {
            p->prev=NULL;
            r=p;
        }
        else
        {
            p->prev=r;
            r->next=p;
            r=p;
        }
        r->next=NULL;
    }
}
void display(n* r)
{
    if(r==NULL)
        printf("Empty\n");
    else
    {
        while(r!=NULL)
        {
            printf("%d\n",r->info);
            r=r->prev;
        }
    }
}

void display1(n* f)
{
    if(f==NULL)
        printf("Empty\n");
    else
    {
        while(f!=NULL)
        {
            printf("%d  ",f->info);
            f=f->next;
        }
    }
}
