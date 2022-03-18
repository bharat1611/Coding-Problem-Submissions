
#include <stdio.h>
#define MAX 10

 void insertion(int [],int);

 int main()
 {
     int a[MAX],n;
     printf("Enter the size of the array : ");
     scanf("%d",&n);
     printf("Enter the values in the array  : ");
     for(int i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }
     insertion(a,n);
     for(int i=0;i<n;i++)
     {
         printf("%d  ",a[i]);
     }
 }

void insertion(int a[],int n)
{
    int i,j,t=0;
    for(i=1;i<n;i++)
    {
        t=a[i];
        j=i;
        while(j>=1 && t<a[j-1])
        {
            a[j]=a[j-1];
            j--;
        }
        a[j]=t;
    }
}
