#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int info;
    struct node *next;
}n;
n* push(n* top,int );
n* pop(n*);
void disp(n*);

int main()
{
    n* top=NULL;
    int num,ch,x;
    do
    {
        printf("\n1 - Push");
        printf("\n2 - Pop");
        printf("\n3 - Display");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter the number to be added : ");
            scanf("%d",&num);
            top=push(top,num);
            break;
        case 2:
            top=pop(top);
            break;
        case 3:
            disp(top);
            break;
        default:
            printf("Invalid Choice\n");
        }
    }while(ch<=3);
}
n* push(n* top,int num)
{
    n* p=NULL;
    p=(n*)malloc(sizeof(n));
    p->info=num;
    p->next=NULL;
    if(p==NULL)
        printf("Not enough memory\n");
     else
        {
            if(top==NULL)
            {
                top=p;
            }
            else
            {
                p->next=top;
                top=p;
            }
        }
return top;
}

n* pop(n* top)
{
    n* temp=NULL;
    temp=top;
    if(top==NULL)
        printf("\nStack is empty\n");
    else
    {
        printf("Popped element is : %d ",top->info);
        top=top->next;
    }
    free(temp);
    return (top);
}
void disp(n* top)
{
    if(top==NULL)
        printf("\nStack is Empty\n");
    else
    {
        while(top!=NULL)
        {
            printf("%d\n",top->info);
            top=top->next;
        }
    }
}

