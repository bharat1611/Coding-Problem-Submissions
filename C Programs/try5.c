#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int info;
    struct node *next;
}n;


void display(n *f)
{
    if(f==NULL)
    {
        return;
    }
    display(f->next);
    printf("%d \n",f->info);
}


n* Ins(n*,int);
void Disp(n*,n*);

int main()
{
     n* l=NULL,*r=NULL;
     int num,ch;
     do
     {
        printf("\nEnter 1 to Insert Element");
        printf("\nEnter 2 to print as a stack");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter the number to be inserted : ");
            scanf("%d",&num);
            r=Ins(r,num);
            if(l==NULL)
                l=r;


            break;
        case 2:
            Disp(l,r);
            //display(l);
            break;

        }
     }while(ch<=3);
    return 0;
}


n *Ins(n* r,int num)
{
    n *p=NULL;
    p=(n*)malloc(sizeof(n));
    if(p==NULL)
    {
        printf("Memory not allocated\n");
    }
    else
    {
        p->info=num;
        if(r==NULL)
        {
            r=p;
        }
        else
        {

        r->next=p;
        r=p;
        }

        r->next=NULL;
    }

        return r;
}


void Disp(n* l,n* r)
{
    n* p=NULL,*b=NULL;
    p=l;
    do
    {
        if(p->next->next==NULL)
        {
            b=p;
            printf("%d\n",p->next->info);
            r=b;
            r->next=NULL;
            p=l;
        }
        else
            p=p->next;

    }while(l!=r);

    printf("%d\n",l->info);
}





