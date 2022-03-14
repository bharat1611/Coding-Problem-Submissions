#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    struct node *next;
    int info;
    int sno;
}nodetype;
nodetype * INSERT(nodetype *,int);
void taskprocess(nodetype **);
void DISPLAY(nodetype *);
void deletenode(nodetype **);
int main()
{
    struct node *top=NULL;
    int choice,n;
    do
    {
        printf("OPERATION YOU NEED TO PERFORM : \n1.) INSERT\n2.) process schdueling\n3.) DISPLAY\n4.) EXIT\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1 :
        {
            printf("Enter the number to be inserted :  ");
            scanf("%d",&n);
            printf("\n");
            top=INSERT(top,n);
            break;
        }
        case 2 :
        {
            taskprocess(&top);
            exit(0);
        }
        case 3 :
        {
            DISPLAY(top);
            break;
        }
        default :
        {
            printf("invalid choice hence exit");
            exit(0);
        }
        }
    }while(choice<=3);
}
nodetype * INSERT(nodetype *l,int n)
{
    static int sno=0;
    nodetype *p=NULL;
    p=(nodetype *)malloc(sizeof(nodetype));
    if (p!=NULL)
    {
        p->sno=++sno;
        p->info=n;
        if (l==NULL)
        {
            p->next=p;
        }
        else
        {
            p->next=l->next;
            l->next=p;
        }
        l=p;
        return l;
    }
}
void DISPLAY(nodetype *start)
{
    if (start==NULL)
    {
        printf("EMPTY LINKED LIST ");
        return ;
    }
    nodetype *end=start;
    while (start->next!=end)
    {
        printf("%d\n",start->info);
        start=start->next;
        printf("\n");
    }
    printf("%d",start->info);
}
void deletenode(nodetype **p){
    nodetype *q=*p , *r=NULL;
    if(q->next==q)
    {
        free(q);
        *p=NULL;
        return;
    }
    r=q->next;
    q->next=r->next;
    free(r);
    *p=q;
}
void taskprocess(nodetype **last)
{
    int timee;
    scanf("%d",&timee);
    nodetype *p = *last;
    while(p!=NULL){
       {
           nodetype *f=p->next;
           f->info=f->info-timee;
           if((f->info)<=0){

            printf("\nProcess %d is Completed", f->sno );
            deletenode(&p);
           }
           else p=p->next;
        }
    }
}
