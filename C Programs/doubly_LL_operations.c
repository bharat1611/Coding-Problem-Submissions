#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int info;
    struct node *next,*prev;
}n;

n* Insert(n*,int);
void odd_even_Search(n*);
void armstrong(int);
void palindrome(int);
void check_Palindrome(n*);
void check_Armstrong(n*);
void display(n*);
void display1(n*);

int main()
{
    n* f=NULL,*r=NULL;
    int ch,num;
    do
    {
        printf("\n1 - Insert");
        printf("\n2 - Count even and odd");
        printf("\n3 - Display as a Stack");
        printf("\n4 - Display as a Queue");
        printf("\n5 - Check Armstrong");
        printf("\n6 - Check Palindrome");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter the number to be inserted : ");
            scanf("%d",&num);
            r=Insert(r,num);
            if(f==0)
                f=r;
                break;
        case 2:
            odd_even_Search(f);
            break;
        case 3:
            display(r);
            break;
        case 4:
            display1(f);
            break;
        case 5:
            check_Armstrong(f);
            break;
        case 6:
            check_Palindrome(f);
            break;
        }
    }while(ch<=6);
}

n* Insert(n* r,int num)
{
    n* p=NULL;
    p=(n*)malloc(sizeof(n));
    if(p==NULL)
        printf("Not Enough Memory\n");
    else
    {
        p->info=num;
        if(r==NULL)
        {
            p->prev=NULL;
            r=p;
        }
        else
        {
            p->prev=r;
            r->next=p;
            r=p;
        }
        r->next=NULL;
    }
}

void odd_even_Search(n* f)
{
    int e=0,o=0;
    while(f!=NULL)
    {
        if(f->info%2==0)
            e++;
        else
            o++;

        f=f->next;
    }
    printf("There are %d even numbers \n",e);
    printf("There are %d odd numbers \n",o);
}
void armstrong(int num)
{
    int d=0,temp=0,sum;
    temp=num;
    while(num>0)
    {
        d=num%10;
        sum=sum+d*d*d;
        num=num/10;
    }
    if(sum==temp)
        printf("\n%d Is Armstrong\n",temp);
    else
        printf("\n%d Is not Armstrong\n",temp);

}

void check_Armstrong(n* f)
{
    int t=0,num=0;
    printf("Enter the number of node to be checked : ");
    scanf("%d",&t);
    t++;
    if(t==1)
        armstrong(f->info);
    else
    {
        while(t--)
        {
            f=f->next;
            num=f->info;
        }
        armstrong(num);
    }
}

void check_Palindrome(n* f)
{
    int t=0,num;
    printf("Enter the number of node to be checked : ");
    scanf("%d",&t);
    t++;
    while(t--)
    {
        f=f->next;
        num=f->info;
    }
    palindrome(num);
}

void palindrome(int num)
{
    int temp=0,d=0,s=0;
    while(num>0)
    {
        d=num%10;
        s=s*10+d;
        num=num/10;
    }
    if(temp==s)
        printf("%d is palindrome\n",temp);
    else
        printf("%d is not palindrome\n",temp);
}
void display(n* r)
{
    if(r==NULL)
        printf("Empty\n");
    else
    {
        while(r!=NULL)
        {
            printf("%d\n",r->info);
            r=r->prev;
        }
    }
}

void display1(n* f)
{
    if(f==NULL)
        printf("Empty\n");
    else
    {
        while(f!=NULL)
        {
            printf("%d  ",f->info);
            f=f->next;
        }
    }
}
