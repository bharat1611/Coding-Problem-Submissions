#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int info;
    struct node *next;
}n;

n* push(n**,int);
void display(n*);
void disp(n*);

int main()
{
    n *top=NULL;
    int num,ch;
    do
    {
        printf("\nEnter 1 to insert Element");
        printf("\nEnter 2 to print as a Stack");
        printf("\nEnter 3 to print as a Queue");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("\nEnter the number to be inserted : ");
            scanf("%d",&num);
            push(&top,num);
            break;
        case 2:
            disp(top);
            break;
        case 3:
            display(top);
            break;
        }
    }while(ch<=3);
    return 0;
}

n* push(n** top,int num)
{
    n* p=(n*)malloc(sizeof(n));
    if(p==NULL)
    {
        printf("Not Enough Memory\n");
    }
    else
    {
        p->info=num;
        if((*top)==NULL)
        {
            *top=p;
            (*top)->next=NULL;

        }
        else
        {
            p->next=(*top);
            (*top)=p;

        }
    }
}

void disp(n* t)
{
    if(t==NULL)
    {
        printf("Empty\n");
    }
    else
    {
        while(t!=NULL)
        {
            printf("%d\n",t->info);
            t=t->next;
        }
    }
}
void display(n *top)
{

    if(top==NULL)
    {
        return;
    }
    display(top->next);
    printf("%d ",top->info);
}
