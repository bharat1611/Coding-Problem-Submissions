#include <Stdio.h>
int main()
{
    int n=0,count=0;
    printf("Enter the number of elements in the array :");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Element %d : ",i);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
                count++;
        }
    }
    printf("The number of duplicates in the array are : %d \n",count);
}
