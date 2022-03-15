#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int info;
    struct node *next;
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
        printf("\n3 - Display");
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
    printf("Enter the number to be inserted : ");
    scanf("%d",&num);
    nodetype *p=NULL;
    p=(nodetype*)malloc(sizeof(malloc));
    if(p!=NULL)
    {
        p->info=num;
        if(*l==NULL && *r==NULL)
            (*l)=(*r)=p;
        else
        {
            (*r)->next=p;
            (*r)=p;
        }
        (*r)->next=NULL;
    }
    else
        printf("Memory Not Allocated");
}

//Can be better, dekh lena code. This is first try me
void sort(nodetype *l)
{
    int c=0,i,j,temp;
    nodetype *present=l;
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
}


