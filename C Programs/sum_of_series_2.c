#include <Stdio.h>
int main()
{
    int n=0,f=1,t=1,g=2;
    float sum=1,m=0,x=0;
    printf("Enter the value of x : ");
    scanf("%f",&x);
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        f=1;
        for(int j=1;j<=g;j++)
        {
            f=f*j;
        }
        t=t*(-1);
        m=t*pow(x,g)/f;
        sum=sum+m;
        g=g+2;
    }
    printf("The Sum : %f\n",sum);
    printf("Number of terms : %d\n",n);
    printf("Value of x : %f\n",x);
}
