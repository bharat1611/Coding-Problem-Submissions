#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int info;
    struct node *next;
}n;

n* Enq(n*,int);
n* Deq(n*,n*);
void Disp(n*);

int main()
{
    n* f=NULL,*r=NULL;
    int ch,num;
    do
    {
    printf("\nPress 1 for Enqueue : ");
    printf("\nPress 2 for Dequeue : ");
    printf("\nPress 3 to Display : ");
    printf("\nEnter your choice :");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        printf("ENter the Number : ");
        scanf("%d",&num);
        r=Enq(r,num);
        if(f==NULL)
            f=r;
        break;
    case 2:
        f=Deq(f,r);
        if(f==NULL)
            r=NULL;
        break;
    case 3:
        Disp(f);
        break;
    }
    }while(ch<=3);

}
n* Enq(n* r,int num)
{
    n* p=NULL;
    p=(n*)malloc(sizeof(n));
    p->info=num;
    if(r==NULL)
        r=p;
    else
    {
        r->next=p;
        r=p;
    }
    r->next=NULL;
    return r;
}
n* Deq(n* f,n* r)
{
    n* p=NULL;
    if(f==NULL && r==NULL)
        printf("Queue is Empty\n");
    else
    {
        p=f;
        printf("Removed : %d",f->info);
        if(f==r)
            f=NULL;
        else
        {
            f=f->next;
        }
    }
    free(p);
    return f;
}
void Disp(n* f)
{
    if(f==NULL)
        printf("Empty\n");
    else
    {
        while(f!=NULL)
        {
            printf(" %d ",f->info);
            f=f->next;
        }
    }
}
