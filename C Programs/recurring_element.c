//Bharat Upadhyay
//2017641
//Question 1

#include <stdio.h>
int main()
{
    int n,c=0;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("Enter the elements : ");
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        c++;
        for(int j=0;j<n;j++)
        {
            if(i!=j && a[i]==a[j])
            break;
        }
        if(c==4)
        {
            printf("Fourth non repeating element is : %d",a[i]);
            break;
        }
    }
}
