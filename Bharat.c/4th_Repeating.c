#include <stdio.h>

int main()
{
    int c=0,i,j,n=0;
     int a[20];
    printf("Enter the number of elements :");
    scanf("%d",&n);
    printf("Enter the elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                   ++c;
            }
            if(c==4)
            {
                printf("\n4th repeating is number is : %d ",a[i]);
                break;
            }
            else
            {
                printf("\nNo 4th repeating element found");
                break;
            }

        }

}
