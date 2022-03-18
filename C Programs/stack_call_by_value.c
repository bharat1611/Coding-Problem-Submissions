//Bharat Upadhyay
//2017641
//Question 4

#include <stdio.h>
#define max 5
int push(int [],int);
int pop(int [],int);
void disp(int [],int);
void peek(int [],int);

int main()
{
    int top=-1,c=0;
    int stack[max];
    do
    {
        printf("\n1- Push");
        printf("\n2- Pop");
        printf("\n3- Display");
        printf("\n4- Peek");
        printf("\nEnter your choice :");
        scanf("%d",&c);
        switch(c)
        {
        case 1:
            top=push(stack,top);
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
        default:
            printf("\nWrong Choice");
            break;
        }
    } while(c<=4);
    return 0;
}

int push(int stack[],int top)
{
    int x;
    if(top==max-1)
        printf("Stack is full\n");
    else
    {
        printf("Enter value to push : ");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
    return top;
}
int pop(int stack[],int top)
{
    int x;
    if(top==-1)
        printf("Stack is Empty\n");
    else
        {
            x=stack[top];
            printf("\nPopped element is : %d",x);
            top--;
        }
    return top;
}
void disp(int stack[],int top)
{
    if(top==-1)
        printf("\nStack is empty");
    else
    {
        while(top>=0)
        {
            printf("%d\n",stack[top]);
            top--;
        }
    }
}
void peek(int stack[],int top)
{
    if(top==-1)
        printf("\nStack is empty");
    else
    {
        printf("\nTop element is : %d",stack[top]);
    }
}
