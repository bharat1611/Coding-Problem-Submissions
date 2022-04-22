#include <stdio.h>

int main()
{
    int c=0,i,j,n=0;
     int a[20],f,r=0;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    printf("Enter the elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        for(i=0;i<n;i++)
        {
            f=1;
            for(j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                    f++;
             }
            if(f>1)
                r++;
            if(r==4)
            {
                printf("\n4th repeating is number is : %d ",a[i]);
                break;
            }

        }

}
