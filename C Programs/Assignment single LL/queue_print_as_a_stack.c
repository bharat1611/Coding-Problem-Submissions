#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int info;
    struct node *next;
}n;

void Ins(n**,n**,int );
void Display(n*);

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
            Ins(&l,&r,num);
            break;
        case 2:
            Display(l);
            break;

        }
     }while(ch<=2);
     return 0;
}
void Ins(n** l,n** r,int num)
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
        if(*l==NULL && *r==NULL)
            *l=*r=p;
        else
        {
            (*r)->next=p;
            *r=p;
        }
        (*r)->next=NULL;    }
}

void Display(n *f)
{
    if(f==NULL)
    {
        return;
    }
    Display(f->next);
    printf("%d \n",f->info);
}
