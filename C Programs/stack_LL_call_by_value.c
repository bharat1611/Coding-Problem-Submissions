#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int info;
    struct node *next;
}n;
n* push(n*,int);
n* pop(n*);
void display(n*);

int main()
{
    int num,ch,x;
    n *top=NULL;
    do
    {
        printf("Enter 1 for push\nEnter 2 for pop \nEnter 3 for display \n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter the element to be pushed : ");
            scanf("%d",&num);
            top=push(top,num);
            break;
        case 2:
            top=pop(top);
            break;
        case 3:
            display(top);
            break;
        default:
            printf("Wrong choice\n");
            break;
        }
        printf("\nEnter 1 to continue. Press anything else to exit : ");
        scanf("%d",&x);
    }while(x==1);
}

n* push(n *tp,int m)
{
        n* p=NULL;
        p=(n*)malloc(sizeof(n));
             p->info=m;
        if(p==NULL)
            printf("Not enough memory\n");
        if(tp==NULL)
        {
            tp=p;
            tp->next=NULL;

        }
        else
        {
            p->next=tp;
            tp=p;
        }
        return(tp);
}
n* pop(n* tp)
{
    n* temp=NULL;
    temp=tp;
    if(tp==NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Popped element is : %d",tp->info);
        tp=tp->next;

    }
    free(temp);
    return (tp);
}
void display(n* tp)
{
        while(tp!=NULL)
    {
        printf(" %d ",tp->info);
        tp=tp->next;
    }

}
