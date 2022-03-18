#include <stdio.h>
#define MAX 100
 void S_sort(int [],int);

 int main()
 {
     int a[MAX],n,i;
     printf("Enter the size of the array : ");
     scanf("%d",&n);
     printf("Enter the elements of the array : ");
     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }
     S_sort(a,n);
     printf("Sorted array is : ");
     for(i=0;i<n;i++)
     {
         printf("%d  ",a[i]);
     }
     return 0;
 }

 void S_sort(int a[],int n)
 {
     int i,j,pos=0,min=0;
     for(i=0;i<n;i++)
     {
         min=a[i];
         for(j=i+1;j<n;j++)
         {
             if(a[j]<min)
             {
                 min=a[j];
                 pos=j;
             }
         }
         if(i!=pos)
         {
            a[pos]=a[i];
            a[i]=min;
         }
     }
 }

