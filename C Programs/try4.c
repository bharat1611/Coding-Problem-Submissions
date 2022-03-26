#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int info;
    struct node *next;
}n;

n *ins(n*,int);
//n *del(n*);
void disp(n*);

int main()
{
    int ch,num;;
    n* l=NULL;
    do
    {
    printf("\nPress 1 for Insert : ");
    printf("\nPress 2 for Del : ");
    printf("\nPress 3 to Display : ");
    printf("\nEnter your choice :");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        printf("Enter the number to be inserted : ");
        scanf("%d",&num);
        l=ins(l,num);
        break;
    case 2:
        printf("blah");
        break;
    case 3:
        disp(l);
        break;
    }
    }while(ch<=3);
}

n* ins(n* l,int num)
{
    n* p=NULL;
    p=(n*)malloc(sizeof(n));

    p->info=num;
    if(l==NULL)
    {
        l->next=NULL;
        l=p;
    }
    else
    {
        p->next=l;
        l=p;
    }

    return l;
}

void disp(n* l)
{
    n* t=NULL;
    t=l;
    if(l==NULL)
        printf("Empty\n");
    else
    {
        do
        {
            printf(" %d ",l->info);
            t=t->next;
        }while(t!=l);
    }
}
