#include<stdio.h>
typedef struct node
{
    int info;
    struct node *next;
} nodetype;

nodetype *Enq(nodetype*, int);
nodetype*Deq(nodetype*);

void Display(nodetype*);
main()
{
    nodetype *F = NULL, *R = NULL;
    int ch, x, N;

    while(1)
    {
        printf("1-Enq, 2-Deq, 3-Display\n");
        scanf("%d",  &ch);
        switch(ch)
        {
            case 1:
                scanf("%d", &N);
                R = Enq(R, N);
                if(F==NULL)
                F=R;
                break;
            case 2:
                if (F==NULL)
                    printf("Empty\n");
                else
                {
                    F = Deq(F);
                    if (F==NULL)
                        R=F;
                }
                break;
            case 3:
                if (F==NULL)
                    printf("Empty");
                else
                    Display(F);
                    break;
        }
    }
}

nodetype* Enq(nodetype*R1, int N)
{
    nodetype* P = NULL;
    P = (nodetype*)malloc(sizeof(nodetype));
    if (P != NULL)
        {
            P->info = N;
            if (R1 == NULL)
                R1 = P;
            else
            {
                R1 -> next = P;
                R1 = P;
            }
            R1 -> next = NULL;
        }
        return R1;
}

nodetype *Deq(nodetype *F1)
{
    nodetype *P = NULL;
    P= F1;
    printf( "%d", F1->info);
    F1 = F1 -> next;
    free(P);
    return (F1);
}

void Display(nodetype*F)
{
    while(F!= NULL)
    {
        printf("%d\n", F->info);
        F = F -> next;
    }
}
