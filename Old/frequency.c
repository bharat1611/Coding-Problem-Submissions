#include <stdio.h>
int main()
{
    int a[20],i,t,j,r,n;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    printf("Enter the elements of the array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;++i)
    {t=1,r=0;
        for(j=0;j<=i;j++)
        {
            if(a[i]==a[j])
                r++;
            if(r>1)
                break;
        }
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
                t++;
        }
        if(r<=1&&t>=1)
    {
        printf("The frequency of element %d is : %d\n",a[i],t);
    }
    }

}
