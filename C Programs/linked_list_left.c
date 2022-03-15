#include <stdio.h>
#include <Stdlib.h>

typedef struct node
{
    int info;
    struct node *next;
}n;
int main()
{
    n *l=NULL,*p=NULL;
    int x,ch;
    while(1)
    {
        p=(n*)malloc(sizeof(n));
        printf("Enter the number to be added :");
        scanf("%d",&x);
        p->info=x;
        if(l==NULL)
        {
            l=p;
            l->next=NULL;
        }
        else
        {

            p->next=l;
            l=p;
        }
        printf("Enter 1 to continue and 0 to display : ");
        scanf("%d",&ch);
        if(ch!=1)
            break;
    }
    while(l!=NULL)
    {
        printf(" %d ",l->info);
        l=l->next;
    }

}
