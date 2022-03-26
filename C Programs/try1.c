#include <stdio.h>

int push(int[],int,int);
int pop(int[],int);
void disp(int[],int);
void peek(int[],int);

int main()
{
    int top=-1,c=0,num,stack[20];
    do
    {
        printf("\n1-Push\n2-Pop\n3-Display\n4-Peek\n");
        printf("Enter your choice : ");
        scanf("%d",&c);
        switch(c)
        {
        case 1:
            printf("Enter the Number to be pushed : ");
            scanf("%d",&num);
            top=push(stack,num,top);
            break;
        case 2:
            top=pop(stack,top);
            break;
        case 3:
            disp(stack,top);
            break;
        case 4:
            peek(stack,top);
            break;
        }
    }while(c<=4);
    return 0;
}
int push(int stack[],int num,int top)
{
    top++;
    stack[top]=num;
    return top;
}
int pop(int stack[],int top)
{
    if(top==-1)
        printf("Stack is empty\n");
    else
    {
        printf("Popped element is : %d",stack[top]);
        top--;
    }
    return top;
}
void disp(int stack[],int top)
{
    if(top!=-1)
    {
        while(top!=-1)
        {
            printf("%d\n",stack[top]);
            top--;
        }
    }
    else
        printf("Stack is empty");
}
void peek(int stack[],int top)
{
    if(top==-1)
        printf("Stack is empty\n");
    else
        printf("%d",stack[top]);
}
