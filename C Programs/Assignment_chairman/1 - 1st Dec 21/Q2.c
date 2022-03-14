#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int info;
    struct node *next;
}nodetype;

void insert(nodetype **,nodetype **);
void del(nodetype **);
void display(nodetype *);

int main()
{
    nodetype *l=NULL,*r=NULL;
    int ch;
    do
    {
        printf("\n1 - Insert");
        printf("\n2 - Input the number to be searched");
        printf("\n3 - Display");
        printf("\nPlease enter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            insert(&l,&r);
            break;
        case 2:
            del(&l);
            break;
        case 3:
            display(l);
            break;
        default:
            printf("\nInvalid Choice\n");
            break;
        }
    }while(ch<=3);
}

void insert(nodetype **l,nodetype **r)
{
    int num=0;
    nodetype *p=NULL;
    printf("Enter the number to be inserted : ");
    scanf("%d",&num);
    p=(nodetype*)malloc(sizeof(nodetype));
    if(p==NULL)
        printf("\nMemory not allocated");
    else
    {
        p->info=num;
        if(*l==NULL && *r==NULL)
            *l=*r=p;
        else
        {
            (*r)->next=p;
            *r=p;
        }
        (*r)->next=NULL;
        printf("\nNode has been successfully added\n");
    }
}

void del(nodetype **l)
{
    int num,c=0;
    nodetype *temp=NULL,*todelete=NULL;
    temp=(*l);
    printf("Enter the number to be searched : ");
    scanf("%d",&num);
    while(temp!=NULL)
    {
        if(temp->info==num)
        {
            todelete=temp->next;
            temp->next=NULL;
            free(todelete);
            printf("\nNodes after %d have been successfully deleted\n",temp->info);
            c=1;
        }
        temp=temp->next;
    }
    if(c==0)
        printf("Node not found\n");
}

void display(nodetype *l)
{
    if(l==NULL)
        printf("\nEmpty");
    else
    {
        while(l!=NULL)
        {
            printf("%d  ",l->info);
            l=l->next;
        }
        printf("\n");
    }
}
