#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int info;
    struct node *next;
}n;

n* ins(n*,int);
void display(n*);

int main()
{
    n* l=NULL,*r=NULL;
    int ch,num;
    do
    {
        printf("\n1- Insert");
        printf("\n2 - Display");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter the number to be inserted : ");
            scanf("%d",&num);
            r=ins(r,num);
            if(l==NULL)
                l=r;
            break;
        case 2:
            display(l);
            break;

        }
    }while(ch<=2);
}
n* ins(n* r,int num)
{
    n* p=NULL;
    p=(n*)malloc(sizeof(n));
    if(p==NULL)
    {
        printf("\nNot enough memory");
    }
    else
    {
        p->info=num;
        if(r==NULL)
        {
            r=p;
        }
        else
        {
            r->next=p;
            r=p;
        }
        r->next=NULL;
        return r;
    }
}
void display(n* l)
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
