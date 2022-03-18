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
        j=i-1;
        while(j>=0 && t<a[j])
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=t;
    }
}
