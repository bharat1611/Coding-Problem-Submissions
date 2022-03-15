

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int info;
    int wt;
    struct node *next;
}node;

void insert(node *a[],int);
void display(node *a[],int);

int main()
{
    int i,j,nodes;
    printf("Enter the number of nodes : " );
    scanf("%d",&nodes);
    node *a[nodes];
    for (int i=0;i<nodes;i++)
        a[i]= NULL;
    insert(a,nodes);
    printf("\n");
    display(a,nodes);
}

 void insert(node *a[],int nodes)
 {
     int i,j,ent,num,weight=0;
     node *p=NULL;
     for(int i=0;i<nodes;i++)
     {
         node *last=NULL;
         printf("\nEnter the number of entries of %d node : ",i+1);
         scanf("%d",&ent);
         for(j=0;j<ent;j++)
         {
             printf("Enter the %d entry of %d : ",j+1,i+1);
             scanf("%d",&num);
             p=(node*)malloc(sizeof(node));
             printf("Enter the weight between %d and %d : ",i+1,j+1);
             scanf("%d",&weight);
             p->info=num;
             p->wt=weight;
             p->next=NULL;
             if(a[i]==NULL)
                a[i]=p;
             else
                last->next=p;
             last=p;
         }
     }
 }

 void display(node *a[],int nodes)
 {
     node *ptr=NULL;
     int i,j;
     printf("Graph is : \n\n");
     for(int i=0;i<nodes;i++)
     {
         ptr=a[i];
         printf("[[%d]]",i+1);
         while(ptr!=NULL)
         {
            printf("----(%d)----[[%d]]",ptr->wt,ptr->info);
            ptr=ptr->next;
         }
         printf("\n");
     }
 }



