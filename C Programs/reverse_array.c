#include <Stdio.h>
int main()
{
    int n=0;
    printf("Enter the number of elements : " );
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Element %d : ",i);
        scanf("%d",&a[i]);
        printf("\n");
    }

    printf("Values stored into the array are : \n");

    for(int i=0;i<n;i++)
    {
        printf(" %d ",a[i]);
    }
    printf("\nValues stored into the array in reverse is : \n ");

    for(int i=n-1;i>=0;i--)
    {
        printf(" %d ",a[i]);
    }
    return 0;
}
