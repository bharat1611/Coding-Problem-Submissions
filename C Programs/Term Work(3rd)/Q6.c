#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int info;
    struct node *next,*rear;
}nodetype;

void insert(nodetype **,nodetype**);
void sort(nodetype*);
void display(nodetype*);

int main()
{
    nodetype *l=NULL,*r=NULL;
    int ch;
    do
    {
        printf("\n1 - Insert ");
        printf("\n2 - Sort");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            insert(&l,&r);
            break;
        case 2:
            sort(l);
            break;
        default:
            printf("Invalid Choice");
            break;
        }
    }while(ch<=1);
}

void insert(nodetype **l,nodetype **r)
{
    int num;
    printf("Enter the number to be inserted : ");
    scanf("%d",&num);
    nodetype *p=NULL;
    p=(nodetype*)malloc(sizeof(malloc));
    if(p!=NULL)
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
    else
        printf("Memory Not Allocated");
}

void sort(nodetype *l)
{
    int c=0,i,j,temp;
    nodetype *present=l;
    printf("\nBefore Sorting\n ");
    display(l);
    while(present!=NULL)
    {
        c++;
        present=present->next;
    }
    present=l;
    for(i=0;i<c-1;i++)
    {
        present=l;
        for(j=0;j<c-i-1;j++)
        {
            if(present->info>present->next->info)
            {
                temp=present->info;
                present->info=present->next->info;
                present->next->info=temp;
            }
            if(present->next!=NULL)
                present=present->next;
        }
    }
    printf("\nAfter sorting\n");
    display(l);
}

void display(nodetype *l)
{
    if(l==NULL)
        printf("\nEmpty\n");
    else
    {
        while(l!=NULL)
        {
            printf("%d  ",l->info);
            l=l->next;
        }
    }
    printf("\n");
}

