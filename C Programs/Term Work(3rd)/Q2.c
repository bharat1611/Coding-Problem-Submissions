#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int info;
    struct node *next;
}nodetype;

void push(nodetype**,int);
void pop(nodetype**);
void display(nodetype*);

int main()
{
    nodetype *top=NULL;
    int ch,num;
    do
    {
        printf("\n1 - Push Values in the stack");
        printf("\n2 - Pop Values from the stack");
        printf("\n3 - Display");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter the number to be inserted : ");
            scanf("%d",&num);
            push(&top,num);
            break;
        case 2:
            pop(&top);
            break;
        case 3:
            display(top);
            break;
        default:
            printf("Invalid choice ");
            break;
        }
    }while(ch<=3);
}

void push(nodetype **top,int num)
{
    nodetype *p=NULL;
    p=(nodetype*)malloc(sizeof(nodetype));
    if(p!=NULL)
    {
        p->info=num;
        if(*top==NULL)
        {

            (*top)=p;
            (*top)->next=NULL;
        }
        else
        {
            p->next=(*top);
            (*top)=p;
        }
    }
    else
        printf("Stack is empty\n");
}
void pop(nodetype **top)
{
    nodetype *temp=NULL;
    if(*top==NULL)
        printf("Stack is empty\n");
    else
    {
        temp=(*top);
        printf("Popped element is : %d \n",temp->info);
        (*top)=(*top)->next;
        free(temp);
    }
}

void display(nodetype *top)
{
    if(top==NULL)
        printf("Stack is empty\n");
    else
    {
        while(top!=NULL)
        {
            printf("%d\n",top->info);
            top=top->next;
        }
    }
}
