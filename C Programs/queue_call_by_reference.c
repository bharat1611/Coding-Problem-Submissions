//Bharat Upadhyay
//2017641
//Question 7

#include<stdio.h>
#define max 10
int main()
{
    int Q[max],F=-1,R=-1,c;
    do
        {
        printf("\nPress 1 for Enqueue : ");
        printf("\nPress 2 for Dequeue : ");
        printf("\nPress 3 to Display : ");
        printf("\nEnter your choice :");
        scanf("%d",&c);
        switch(c)
        {
        case 1:
            Enqueue(Q,&R);
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
void Enqueue(int Q[],int *R)
{
    int x;
    if(*R==max-1)
        printf("Queue is full\n");
    else
        {
        printf("\nEnter the element: ");
        scanf("%d",&x);
        (*R)++;
        Q[*R]=x;
    }
}
void Dequeue(int Q[],int *F,int *R)
{
    if(*F==-1)
        printf("Queue is empty\n");
    else if(*F==*R)
        {
        printf("\nDequeued element is %d\n",Q[*F]);
        *F=-1;
        }
    else
        {
        printf("\nDequeued element is %d\n",Q[*F]);
        (*F)++;
        }
    return F;
}
void Display(int Q[],int F,int R)
{
    if(F==-1)
        printf("Queue is empty\n");
    else
        {
        for( ;F<=R;F++)
            printf("%d\n",Q[F]);
        }
}
