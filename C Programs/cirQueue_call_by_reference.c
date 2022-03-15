//Bharat Upadhyay
//2017641
//Question 9

#include<stdio.h>
#define max 10
int main()
{
    int Q[max],F=-1,R=-1,c;
    do
        {
        printf("\nPress 1 for Enqueue : ");
        printf("\nPress 2 for Dequeue : ");
        printf("\nPress 3 for Display : ");
        printf("\nEnter your choice : ");
        scanf("%d",&c);
        switch(c)
        {
        case 1:
            Enqueue(Q,&F,&R);
            if(R==0)
            F=0;
            break;
        case 2:
            Dequeue(Q,&F,&R);
            if(F==-1)
            R=-1;
            break;
        case 3:
            Display(Q,F,R);
            break;
        default:
            printf("Invalid Choice\n");
        }
    }while(c<=3);
    return 0;
}

void Enqueue(int Q[],int *F,int *R)
{
    int x;
    if((*R+1)%max==*F)
        printf("Queue is full\n");
    else if(*R==-1)
        {
        printf("Enter the element: ");
        scanf("%d",&x);
        *R=0;
        Q[*R]=x;
        }
    else
        {
        printf("Enter the element: ");
        scanf("%d",&x);
        *R=(*R+1)%max;
        Q[*R]=x;
        }
}

void Dequeue(int Q[],int *F,int *R)
{
    if(*F==-1)
        printf("Queue is Empty\n");
    else if(*F==*R)
        {
        printf("Dequeued element is %d\n",Q[*F]);
        *F=-1;
        }
    else
        {
        printf("Dequeued element is %d\n",Q[*F]);
        *F=(*F+1)%max;
        }
}

void Display(int Q[],int F,int R)
{
    if(F==-1)
        printf("Queue is Empty\n");
    while(F!=R)
        {
        printf("%d\n",Q[F]);
        F=(F+1)%max;
        }
    if(F!=-1)
        printf("%d\n",Q[F]);
}
