
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int info;
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
     int i,j,ent,num;
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
             p->info=num;
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
     for(int i=0;i<nodes;i++)
     {
         ptr=a[i];
         printf("The entries of %d are : ",i+1);
         while(ptr!=NULL)
         {
            printf("(%d)   ",ptr->info);
            ptr=ptr->next;
         }
         printf("\n");
     }
 }



