#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int info;
    struct node *next;
}n;

void Insert(n**,n**,int);
void count(n*);
int Palin(int);
void Display(n*);

int main()
{
    n* l=NULL,*r=NULL;
    int num,ch;
    do
    {
        printf("\nEnter 1 to Insert number");
        printf("\nEnter 2 to count palindrome numbers");
        printf("\nEnter 3 to display linked list");
        printf("\nPlease enter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter the Number to be Inserted : ");
            scanf("%d",&num);
            Insert(&l,&r,num);
            break;
        case 2:
            count(l);
            break;
        case 3:
            Display(l);
            break;
        }
    }while(ch<=3);
}
void Insert(n** l,n** r,int num)
{
    n* p=NULL;
    p=(n*)malloc(sizeof(n));
    if(p==NULL)
        printf("Not Enough Memory\n");
    else
    {
        p->info=num;
        if(*r==NULL && *l==NULL)
            (*l)=(*r)=p;
        else
        {
            (*r)->next=p;
            (*r)=p;
        }
        (*r)->next=NULL;
    }
}

void count(n* l)
{
    int c=0,p=0;
    if(l==NULL)
        printf("Empty\n");
    else
    {
        while(l!=NULL)
        {
            c=Palin(l->info);
            l=l->next;
            if(c!=0)
                p++;
            c=0;
        }
    }
    printf("\nThere are %d palindrome Numbers \n",p);
}

int Palin(int n)
{
    int p=0,d=0,f=0;
    p=n;
    while(n>0)
    {
        d=n%10;
        n=n/10;
        f=f*10+d;
    }
    if(f==p)
        return 1;
    else
        return 0;
}

void Display(n* l)
{
    printf("\n");
    if(l==NULL)
        printf("Empty\n");
    else
    {
        while(l!=NULL)
        {
            printf("%d ",l->info);
            l=l->next;
        }
    }
    printf("\n");
}
