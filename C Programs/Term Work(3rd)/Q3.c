#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int info;
    struct node *next;
}n;
n* Enq(n*,int);
n* Deq(n*,n*);
void Disp(n*);

int main()
{
    n* f=NULL,*r=NULL;
    int ch,num,x;
    do
    {
        printf("\n1 - Enqueue\n");
        printf("2 - Dequeue\n");
        printf("3 - Display\n");
        printf("Please enter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("\nPlease enter the number to be added : ");
            scanf("%d",&num);
            r=Enq(r,num);
            if(f==NULL)
                f=r;
            break;
        case 2:
            f=Deq(r,f);
            if(f==NULL)
                r=NULL;
                    break;
            case 3:
                Disp(f);
                break;
           default:
                printf("Wrong choice \n");
        }
        //printf("\nEnter 1 to continue, anything else to exit : ");
      //  scanf("%d",&x);
        }while(ch<=3);

  return 0;
}

n* Enq(n* r,int num)
{
    n* p=NULL;
    p=(n*)malloc(sizeof(n));
    if(p==NULL)
        printf("Memory not allocated");
    else
    {
            p->info=num;
            if(r==NULL)
                r=p;
            else
            {
                r->next=p;
                r=p;
            }
    }
    r->next=NULL;
    return (r);
}
n* Deq(n* r,n* f)
{
    n* p=NULL;
    if(f==NULL && r==NULL)
        printf("\nQueue is empty\n");
    else
    {
        p=f;
        printf("\nDequeued element is : %d \n",f->info);
        if(f==r)
            f=NULL;
        else
            f=f->next;
    }
    free(p);
    return(f);
}

void Disp(n* f)
{
    if(f==NULL)
        printf("\nQueue is empty\n");

    while(f!=NULL)
    {
        printf(" %d ",f->info);
        f=f->next;
    }
}

