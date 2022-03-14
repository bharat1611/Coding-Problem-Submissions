#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int coef,power;
    struct node *next;
}nodetype;

void insert(nodetype**,nodetype **);
void calc(nodetype*,nodetype*);
void set_value(nodetype **);

int main()
{
    nodetype *l1=NULL,*r1=NULL,*l2=NULL,*r2=NULL;
    int i=0,n=0;
    printf("\nEnter the number of terms in the first polynomial : ");
    scanf("%d",&n);
    printf("Enter the 1st polynomial with its degrees in descending order\n");
    for(i=0;i<n;i++)
        {
            insert(&l1,&r1);
        }
    printf("\nEnter the number of terms in the second polynomial : ");
    scanf("%d",&n);
    printf("Enter the 2nd polynomial with its degrees in descending order\n");
    for(i=0;i<n;i++)
        {
            insert(&l2,&r2);
        }
    set_value(&r1);
    set_value(&r2);
    calc(l1,l2);
    printf("%d^%d \n",(r1->coef)+(r2->coef),r1->power);
}

void insert(nodetype **l,nodetype **r)
{
    nodetype *p=NULL;
    int num=0,pow=0;
    p=(nodetype*)malloc(sizeof(nodetype));
    printf("Enter the coefficient : ");
    scanf("%d",&num);
    printf("Enter the power : ");
    scanf("%d",&pow);
    if(p!=NULL)
    {
        p->coef=num;
        p->power=pow;
        if(*r==NULL && *l==NULL)
        {
            (*r)=(*l)=p;
        }
        else
        {
            (*r)->next=p;
            (*r)=p;
        }
        (*r)->next=NULL;
    }
}

void calc(nodetype *l1,nodetype *l2)
{
    while(l1->power!=0 || l2->power!=0)
    {
        if(l1->power>l2->power)
        {
            printf("%d^%d",l1->coef,l1->power);
            l1=l1->next;
        }
        else if(l1->power==l2->power)
        {
            printf("%d^%d",(l1->coef)+(l2->coef),l2->power);
            l1=l1->next;
            l2=l2->next;
        }
        else if(l1->power<l2->power)
        {
            printf("%d^%d",l2->coef,l2->power);
            l2=l2->next;
        }
        printf(" + ");
    }
}

void set_value(nodetype **r)
{
    if((*r)->power==0)
    {
        return;
    }
    else
    {
        nodetype *p=NULL;
        p=(nodetype*)malloc(sizeof(nodetype));
        p->power=0;
        p->coef=0;
        (*r)->next=p;
        (*r)=p;
        (*r)->next=NULL;
    }
}


