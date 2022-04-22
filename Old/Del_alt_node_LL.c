#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int info;
    struct node *next;
}nodetype;



void insert(nodetype** top, int num)
{
    nodetype *p = (nodetype*)malloc(sizeof(nodetype));
    p ->info = num;
    if((*top) == NULL)
    {
        (*top) = p;
        (*top) ->next = NULL;
    }
    else
    {
        p->next = (*top);
        (*top) = p;
    }
}

void delete_(nodetype** top)
{
    nodetype* todelete = NULL;

    while((*top)->next != NULL)
    {
        if(*top!=NULL && (*top)->next != NULL)
        {
            todelete = (*top)->next;
            (*top)->next = todelete->next;
            (*top) = (*top)-> next;
        }
    }
}

void display(nodetype* top)
{
    if(top == NULL)
        printf("Empty");
    else
    {
        while(top != NULL)
        {
            printf("%d \n", top->info);
            top = top->next;
        }
    }
}

int main()
{
    nodetype *top = NULL;
    int num;
    for(int i = 0 ; i < 5; i++)
    {
        scanf("%d",&num);
        insert(&top, num);
    }
    display(top);
    delete_(&top);
    display(top);
}
