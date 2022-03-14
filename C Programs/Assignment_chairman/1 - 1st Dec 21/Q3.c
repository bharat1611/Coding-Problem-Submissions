#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int info;
    struct node *next,*prev;
}nodetype;

void insert(nodetype **,nodetype**);
void del(nodetype**,nodetype**);
void display(nodetype*);

int main()
{
    nodetype *l=NULL,*r=NULL;
    int ch;
    do
    {
        printf("\n1 - Insert");
        printf("\n2 - Input the number to be searched");
        printf("\n3 - Display");
        printf("\nPlease nter your choice : " );
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            insert(&l,&r);
            break;
        case 2:
            del(&l,&r);
            break;
        case 3:
            display(l);
            break;
        default:
            printf("Invalid Choice");
            break;
        }
    }while(ch<=3);
}

void insert(nodetype **l,nodetype **r)
{
    int num;
    printf("Enter the value to be inserted : ");
    scanf("%d",&num);
    nodetype *p=NULL;
    p=(nodetype*)malloc(sizeof(nodetype));
    if(p==NULL)
        printf("\nNot Enough Memory");
    else
    {
        p->info=num;
        if(*l==NULL && *r==NULL)
        {
            (*l)=(*r)=p;
            p->prev=NULL;
        }
        else
        {
            (*r)->next=p;
            p->prev=(*r);
            (*r)=p;
        }
        (*r)->next=NULL;
        printf("\nNode has been successfully added\n");
    }
}

void del(nodetype** l,nodetype **r)
{
    nodetype *temp=NULL,*todelete=NULL;
    int num,c=0;
    printf("\nEnter the number to be searched : ");
    scanf("%d",&num);
    temp=(*l);
    while(temp!=NULL)
    {
        if(temp->info==num)
        {
            temp->next=NULL;
            todelete=temp->next;
            free(todelete);
            printf("\nNodes after %d has been successfully deleted\n",temp->info);
            c=1;
        }
        temp=temp->next;
    }
    if(c==0)
        printf("\nNode not found \n");
}

void display(nodetype *l)
{
    if(l==NULL)
    {
        printf("\nEmpty\n");
    }
    else
    {
        while(l!=NULL)
        {
            printf("%d   ",l->info);
            l=l->next;
        }
        printf("\n");
    }
}
