#include <stdio.h>
#include <stdlib.h>
typedef struct node
{   int coeff,power;
    struct node *next;
}nodetype;
nodetype *insert(nodetype *r,int c,int po)
{   nodetype *p=NULL;
    p=(nodetype*)malloc(sizeof(nodetype));
    if(p!=NULL)
    {   p->coeff=c;
        p->power=po;
        if(r==NULL)
            r=p;
        else
        {   r->next=p;
            r=p;
        }
        r->next=NULL;
    }
}
void display(nodetype *l)
{   while(l->next!=NULL)
    {   printf("(%dx^%d) + ",l->coeff,l->power);
        l=l->next;
    }
    printf("(%dx^%d)\n",l->coeff,l->power);
}
nodetype *sum(nodetype **l,nodetype *r,nodetype *l1,nodetype *l2,int s1,int s2)
{   nodetype *t1=NULL,*t2=NULL,*p=NULL;
    int max=s1>s2?s1:s2;
    int f,c;
    while(max>=0)
    {   t1=l1;
        t2=l2;
        c=0;
        f=0;
        while(t1!=NULL)
        {   if(t1->power==max)
            {   f=1;
                c=c+t1->coeff;
            }
            t1=t1->next;
        }
        while(t2!=NULL)
        {   if(t2->power==max)
            {   f=1;
                c=c+t2->coeff;
            }
            t2=t2->next;
        }
        if(f==1)
        {   p=(nodetype*)malloc(sizeof(nodetype));
            p->coeff=c;
            p->power=max;
            if(*l==NULL)
                *l=r=p;
            else
            {   r->next=p;
                r=p;
            }
        }
        max--;
    }
    r->next=NULL;
    return r;
}
int main()
{   nodetype *l1=NULL,*r1=NULL,*l2=NULL,*r2=NULL,*l=NULL,*r=NULL;
    int ch=1,c,p,s1=0,s2=0;
    printf("Enter the first polynomial : \n");
    while(ch!=0)
    {   printf("Enter the value of coefficient : ");
        scanf("%d", &c);
        printf("Enter the value of power of x : ");
        scanf("%d", &p);
        r1=insert(r1,c,p);
        if(l1==NULL)
            l1=r1;
        if(r1->power>s1)
            s1=r1->power;
        printf("Enter 1. to continue\nEnter 0. to exit\n");
        scanf("%d", &ch);
    }
    printf("The first polynomial is : ");
    display(l1);
    ch=1;
    printf("Enter the second polynomial 2 : \n");
    while(ch!=0)
    {   printf("Enter the value of coefficient : ");
        scanf("%d", &c);
        printf("Enter the value of power of x : ");
        scanf("%d", &p);
        r2=insert(r2,c,p);
        if(l2==NULL)
            l2=r2;
        if(r2->power>s2)
            s2=r2->power;
        printf("Enter 1. to continue\nEnter 0. to exit\n");
        scanf("%d", &ch);
    }
    printf("The second polynomial is : ");
    display(l2);
    r=sum(&l,r,l1,l2,s1,s2);
    printf("The sum of the polynomial equations is : ");
    display(l);
    return 0;
}
