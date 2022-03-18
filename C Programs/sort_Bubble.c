#include <stdio.h>
#define MAX 100

void B_sort(int [],int);

int main()
{
    int a[MAX],i,n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    printf("Enter the elements of the array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    B_sort(a,n);

    return 0;
}

void B_sort(int a[],int n)
{
    int temp,i,j,k,c;
    for(i=0;i<n-1;i++)
    {
        c=0;
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            else
            {
                c++;
            }
        }
        if(c==n-1-i)
        {
            break;
        }
        printf("In %d pass : ",i+1);
        for(k=0;k<n;k++)
        {
            printf("%d  ",a[k]);
        }
        printf("\n");
    }
        printf("Sorted array is : ");
        for(i=0;i<n;i++)
        {
            printf("%d   ",a[i]);
        }
}

