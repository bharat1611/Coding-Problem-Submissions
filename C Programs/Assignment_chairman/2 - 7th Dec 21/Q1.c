#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int info;
    struct node *next;
}node;
void insert(node **);
void display_stack(node*);
void display_queue(node*);
int main()
{
    node *top=NULL;
    int ch;
    do
    {
        printf("\n1 - Insert");
        printf("\n2 - Display stack in front order");
        printf("\n3 - Display stack in reverse order");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            insert(&top);
            break;
        case 2:
            display_stack(top);
            break;
        case 3:
            display_queue(top);
            break;
        default:
            printf("\nInvalid Choice");
            break;
        }
    }while(ch<=3);
}

void insert(node **top)
{
    node * p=NULL;
    int num;
    printf("Enter the value to be inserted : ");
    scanf("%d",&num);
    p=(node*)malloc(sizeof(node));
    if(p!=NULL)
    {
        p->info=num;
        if((*top)==NULL)
        {
            (*top)=p;
            (*top)->next=NULL;
        }
        else
        {
            p->next=(*top);
            (*top)=p;
        }
        printf("\nNode has been successfully added\n");
    }
    else
        printf("Memory not allocated");
}

void display_stack(node *top)
{
    if(top==NULL)
        printf("\nList is empty");
    else
    {
        printf("\n");
        while(top!=NULL)
        {
            printf("%d\n",top->info);
            top=top->next;
        }
    }
}

void display_queue(node *top)
{
    if(top==NULL)
    {
        return;
    }
    display_queue(top->next);
    printf("%d  ",top->info);


}
