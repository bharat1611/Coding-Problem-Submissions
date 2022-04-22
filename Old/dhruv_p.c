#include <stdio.h>

int main()
{
    int n=0,j=0,m=0,c=0;
    printf("Enter the number of elements : " );
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(n%2==0)
        m=(n/2)-1;
    else
        m=(n-1)/2;
    j=n-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]>a[j])
            ++c;
        j--;
    }
    printf("\n%d",c);

}
