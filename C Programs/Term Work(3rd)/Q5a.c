#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int processNumber;
    int data;
    struct node *next;
} nodetype;

void insert(nodetype **last, int processTime, int n)
{
    nodetype *p = NULL;
    p = (nodetype *)malloc(sizeof(nodetype));
    if (p != NULL)
    {
        p->processNumber = n;
        p->data = processTime;
        if (*last == NULL)
        {
            *last = p;
            (*last)->next = p;
            return;
        }
        p->next = (*last)->next;
        (*last)->next = p;
        (*last) = p;
    }
}

void deletenode(nodetype **prev)
{
    nodetype *p = *prev, *curr = NULL;
    if (p->next == p)
    {
        free(p);
        *prev = NULL;
        return;
    }
    curr = p->next;
    p->next = curr->next;
    free(curr);
    *prev = p;
}

void taskprocess(nodetype **last, int processTime)
{
    nodetype *prev = *last;
    int currTime = 0;
    nodetype *curr = NULL;
    while (prev != NULL)
    {
        curr = prev->next;
        curr->data -= processTime;
        currTime += processTime;
        if ((curr->data) <= 0)
        {
            printf("\nProcess %d is Completed in %dns", curr->processNumber, currTime);
            deletenode(&prev); // previous node of the node to be deleted
        }
        else
            prev = prev->next;
    }
}
int main()
{
    nodetype *last = NULL;
    int time, n, x;
    printf("Enter the processing unit in nanosecond : ");
    scanf("%d", &time);
    printf("Enter the Number of processes : ");
    scanf("%d", &n);
    printf("*Enter all the processes*\n");
    int i = 0;
    while (i < n)
    {
        printf("Enter the time of Process %d : ", i + 1);
        scanf("%d", &x);
        insert(&last, x, i + 1);
        i++;
    }
    taskprocess(&last, time);
    printf("\n*All processes completed successfully !!*");
    return 0;
}

