
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int info;
    struct node *next;
}nodetype;

void insert(nodetype **,nodetype **);
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
                //delete(&l,&r);
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