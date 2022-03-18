#include <stdio.h>

int main()
{
    int size,mainIndex,i,j,temp=0;
    scanf("%d",&size);
    int x[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&x[i]);
    }

    scanf("%d",&mainIndex);

    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(x[i]>x[j])
            {
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
        }
    }

    for(i=mainIndex;i<size;i++)
    {
        if(x[i]>x[mainIndex])
            printf("%d\n",x[i]);

    }

}
