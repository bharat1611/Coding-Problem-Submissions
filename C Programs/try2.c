#include <stdio.h>
#define max 10

int Enq(int[],int,int);
int Deq(int[],int,int);
void Disp(int[],int,int);

int main()
{
    int q[max],f=-1,r=-1,num,ch;
    do
    {
        printf("\n1 - Enq\n2 - Deq\n3 - Display\n");
        printf("Enter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter the number : ");
            scanf("%d",&num);
            r=Enq(q,r,num);
            if(r==0)
                f=0;
            break;
        case 2:
            f=Deq(q,r,f);
            if(f==-1)
                r=-1;
            break;
        case 3:
            Disp(q,f,r);
            break;
        }
    }while(ch<=3);
}
int Enq(int q[],int r,int num)
{
    if(r<max)
    {
        r++;
        q[r]=num;
    }
    else
        printf("Queue is full\n");
    return r;
}
int Deq(int q[],int r,int f)
{
    if(f==-1)
        printf("Queue is Empty\n");
    else if(f==r)
    {
        printf("Removed Element is : %d",q[f]);
        f=-1;
    }
    else
    {
        printf("Removed Element is : %d ",q[f]);
        f++;
    }
    return f;
}
void Disp(int q[],int f,int r)
{
    if(f==-1)
        printf("Queue is Empty\n");
    else
        while(f<=r)
    {
        printf(" %d ",q[f]);
        f++;
    }
}
