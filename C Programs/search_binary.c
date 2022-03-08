#include <stdio.h>

int bs(int a[],int l,int r,int x)
{
    int mid=0;
    if(r>=1)
    {
        int mid=l+(r-1)/2;
        if(a[mid]==x)
            return mid;
        if(a[mid]>x)
            return bs(a,l,mid-1,x);
        return bs(a,mid+1,r,x);
    }
    return -1;
}
int main()
{
    int n,num=0,i=0,mid=0;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements  : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nThe elements entered are : ");
    for(i=0;i<n;i++)
    {
        printf("%d   ",a[i]);
    }
    printf("\nEnter the number to be searched : " );
    scanf("%d",&num);
    int result=bs(a,0,n-1,num);
    (result==-1)?printf("\nElement not present in the array"):printf("\nElement present at position %d",result+1);
    
    
}