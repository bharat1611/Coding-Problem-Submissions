#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int info;
    struct node *next;
}n;

void Enq(n**,n**,int);
void Deq(n**,n**);
void Del(n**,n**);
void disp(n*);

int main()
{
    n* l=NULL,*r=NULL;
    int num,ch;
    do
    {
        printf("\n1 - Enqueue");
        printf("\n2 - Dequeue");
        printf("\n3 - Delete an element as per choice");
        printf("\n4 - Display");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter the number to be inserted : ");
            scanf("%d",&num);
            Enq(&l,&r,num);
            break;
        case 2:
            Deq(&l,&r);
            break;
        case 3:
            Del(&l,&r);
            break;
        case 4:
            disp(l);
            break;
        }
    }while(ch<=3);
}

void Enq(n** l,n** r,int num)
{
    n* p=NULL;
    p=(n*)malloc(sizeof(n));
    if(p==NULL)
        printf("Empty\n");
    else
    {
        p->info=num;
        if((*l)==NULL && (*r)==NULL)
        {
            (*l)=(*r)=p;
        }
        else
        {
            (*r)->next=p;
            (*r)=p;
        }
        (*r)->next=NULL;

    }
}

void Deq(n** l,n** r)
{
    n* temp=NULL;
    if((*l)==(*r))
    {
        printf("\nQueue is Empty\n");
    }
    else
    {
        temp=(*l);
        (*l)=(*l)->next;
        free(temp);
        printf("\nNode Deleted\n");
    }
}
void Del(n** l,n** r)
{
    n* temp=NULL;
    int num,c=0;
    printf("Enter the Number to be deleted  : ");
    scanf("%d",&num);
    while((*l)!=NULL)
    {
        if((*l)->info==num)
            c=1;
        (*l)=(*l)->next;
    }
    if(c==1)
    {
        if((*l)->info==num)
        {
            temp=(*l);
            (*l)=(*l)->next;
            free(temp);
        }
        else
        {
            while((*l)!=NULL)
            {
                if((*l)->next->info==num)
                {
                    (*l)->next=(*l)->next->next;
                    temp=(*l)->next;
                    free(temp);
                }
                (*l)=(*l)->next;
            }
        }
    }
    else
    {
        printf("\nNode not Found\n");
    }

}
void disp(n* l)
{
    if(l==NULL)
    {
        printf("\nEmpty\n");
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
