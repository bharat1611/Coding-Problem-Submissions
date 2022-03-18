#include <stdio.h>
int main()
{
    int n=0,rev=0,t=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(n!=0)
    {
        t=n%10;
        rev=rev*10+t;
        n/=10;
    }
    printf("Reverse of the number is : %d\n",rev);
}
