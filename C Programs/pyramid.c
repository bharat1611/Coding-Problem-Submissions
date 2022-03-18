#include <Stdio.h>
int main()
{
    int n=0,i=0,j=0,k=0;
    printf("Enter the number of rows in the pyramid : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}
