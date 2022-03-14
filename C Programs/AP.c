//Bharat Upadhyay
//2017641
//Question 2

#include <stdio.h>
int main()
{
    int n,p=0,c=1;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("Enter the elements : ");
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    p=a[0]-a[1];
    for(int i=0;i<n;i++)
    {
        if(a[i]-a[i+1]==p)
        {
            ++c;
        }
    }
    if(n==c)
        printf("Array is in AP");
    else
        printf("Array is not in AP");
}
