
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int info;
    struct node *next;
}nodetype;

void insert(nodetype **,nodetype **);
void del(nodetype **,nodetype**);
void display(nodetype*);

int main()
{
    nodetype *l=NULL,*r=NULL;
    int ch;
    do
    {
        printf("\n1 - Insert");
        printf("\n2 - Delete node");
        printf("\n3 - Display");
        printf("\nEnter your choice : ");
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
    } while (ch<=3);
}

void insert(nodetype **l,nodetype** r)
{
    nodetype *p=NULL;
    int num;
    printf("\nEnter the number to be inserted : ");
    scanf("%d",&num);
    p=(nodetype*)malloc(sizeof(nodetype));
    if(p==NULL)
        printf("\nNot enough memory");
    else
    {
        p->info=num;
        if(*r==NULL && *l==NULL)
            (*r)=(*l)=p;
        else
        {
            (*r)->next=p;
            (*r)=p;
        }
        (*r)->next=NULL;
    }
}
void del(nodetype ** l,nodetype** r)
{
    int n;
    nodetype *temp=NULL,*todelete=NULL;
    printf("Enter the node to be deteled : ");
    scanf("%d",&n);
    if((*l)->info==n)
    {
        todelete=(*l);
        (*l)=(*l)->next;
        free(todelete);
    }
    else
    { 
        temp=(*l);
        while(temp!=NULL)
        {
            if(temp->next->info==n)
            {
                todelete=temp->next;
                temp->next=todelete->next;
                free(todelete);
            }
            temp=temp->next;
        }
    }
}
void display(nodetype *l)
{
    if(l==NULL)
        printf("\nEmpty");
    else
    {
        while(l!=NULL)
        {
            printf("%d   ",l->info);
            l=l->next;
        }
    }
}