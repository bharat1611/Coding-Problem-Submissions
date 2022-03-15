#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int info;
    struct node *next,*prev;
}n;

void ascending_insert(n**,n**,int);
void display_ascending(n*);
void display_descending(n*);

int main()
{
    n* l=NULL,*r=NULL;
    int num,ch;
    do
    {
        printf("\nEnter 1 to Insert number");
        printf("\nEnter 2 to print in ascending order");
        printf("\nEnter 3 to print in descending order");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter the Number to be Inserted : ");
            scanf("%d",&num);
            ascending_insert(&l,&r,num);
            break;
        case 2:
            display_ascending(l);
            break;
        case 3:
            display_descending(r);

            break;
        }
    }while(ch<=3);
    return 0;
}

void ascending_insert(n** l,n** r,int num)
{
    n *p=NULL,*temp=NULL;
    int c=0;
    p=(n*)malloc(sizeof(n));
    if(p==NULL)
        printf("Empty\n");
    else
    {
        p->info=num;
        p->next=NULL;
        p->prev=NULL;
        if(*l==NULL && *r==NULL)
        {
            *l=*r=p;
            //(*l)->next=NULL;
            //(*r)->next=NULL;
        }
        else
        {

            if(p->info<(*l)->info)
            {
                (*l)->prev=p;
                p->next=(*l);
                *l=p;
                //(*l)->prev=NULL;
            }
            else if(p->info>(*r)->info)
            {
                (*r)->next=p;
                p->prev=(*r);
                (*r)=p;
                //(*r)->next=NULL;
            }
            else
            {
                temp=(*l);
                while(temp!=NULL)
                {
                    if((p->info)>(temp->info) && (p->info)<(temp->next->info))
                    {
                        p->next=temp->next;
                        temp->next->prev=p;
                        temp->next=p;
                        p->prev=temp;

                    }
                    temp=temp->next;
                }
            }
        }
    }
}

void display_descending(n* r)
{
    if(r==NULL)
        printf("Empty\n");
    else
    {
        while(r!=NULL)
        {
            printf("%d  ",r->info);
            r=r->prev;
        }
    }
}

void display_ascending(n* l)
{
    if(l==NULL)
        printf("Empty\n");
    else
    {
        while(l!=NULL)
        {
            printf("%d  ",l->info);
            l=l->next;
        }
    }
}
