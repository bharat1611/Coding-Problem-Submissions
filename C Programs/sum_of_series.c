#include <Stdio.h>

int recur(int x)
{
    int f=1;
    for(int i=1;i<=x;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int sum=0,v=0;
    for(int i=1;i<=5;i++)
    {
        sum=sum + recur(i)/i;
    }
    printf("Sum of the series is : %d ",sum);
}
