#include <stdio.h>
#include <stdlib.h>

typedef struct node 
{
    int info;
    struct node *next;
}node;

void insert(node **,int);
void display(node*);

int main()
{
    node *top=NULL;
    int num;
    for(int i=0;i<4;i++)
    {
        printf("Enter : ");
        scanf("%d",&num);
        insert(&top,num);
    }
    display(top);
}

void insert(node **top,int num)
{
    node *p=(node*)malloc(sizeof(node));
    if(p!=NULL)
    {
        p->info=num;
        p->next=(*top);
        (*top)=p;
    }
}

void display(node* top)
{
    if(top==NULL)
        printf("empty");
    else
    {
        while(top!=NULL)
        {
            printf("%d\n",top->info);
            top=top->next;
        }
    }
}