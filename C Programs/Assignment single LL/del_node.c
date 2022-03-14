//START
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int info;                       //To store value of Node
    struct node *next;              //To store address of Node
}n;

n* Insert(n**,n**,int);             //Declaring Function to Insert
void Del(n**,n**);                  //Declaring Function for Deletion
void Display(n*,n*);                //Declaring Function to Display

int main()
{
    n* l=NULL,*r=NULL;              //Initializing left and right pointers
    int ch,num;
    do
    {
        printf("\nEnter 1 to insert node");
        printf("\nEnter 2 to delete node");
        printf("\nEnter 3 to Display");
        printf("\nPlease enter your choice : ");
        scanf("%d",&ch);            //Menu Driven
        switch(ch)
        {
        case 1:
            printf("Please enter the number : ");
            scanf("%d",&num);
            Insert(&l,&r,num);      //Calling function 'Insert' by reference
            break;
        case 2:
            Del(&l,&r);             //Calling function 'Del' by reference
            break;
        case 3:
            Display(l,r);
            break;
        }
    }while(ch<=3);
    return 0;
}

n* Insert(n** l,n** r,int num)      //Defining function to Insert
{
    n* p=NULL;
    p=(n*)malloc(sizeof(n));        //Initializing Memory Dynamically
    if(p==NULL)
        printf("Not Enough Memory\n");
    else
    {
        p->info=num;
        if(*l==NULL && *r==NULL)       //Condition for First Node
            *l=*r=p;
        else                            //For rest of the nodes
        {
            (*r)->next=p;
            *r=p;
        }
        (*r)->next=NULL;
    }
}

void Del(n** l,n **r)                   //Defining Function for Deletion
{
    int c=0;
    n* temp=NULL;
    temp=(*l);
   if(*l==NULL)                         //If Linked list is empty
   {
       printf("\nEmpty\n");
       return;
   }
   printf("Enter the node to be deleted : ");
   int value;
   scanf("%d",&value);

   while(temp!=NULL)                    //Checking if node is present
   {
       if(temp->info==value)
       {
            c=1;
            break;
       }
       temp=temp->next;
   }
   if(c==1)                             //If node is found
   {
    if((*l)->info==value)                //If the 1st node is to be deleted
    {
        n *todelete=*l;
        *l=(*l)->next;
        free(todelete);
        printf("\nNode Deleted\n");        //Node Successfully Deleted
        return;
    }
    else                                 //If other nodes are to be deleted
    {
        n *p=NULL,*temp=NULL;
        p=(*l)->next;
        temp=*l;
        while(p!=NULL)
        {
            if(p->info==value)
            {
                temp->next=p->next;
                printf("\nNode Deleted\n");
                free(p);
                return;                   //Node successfully deleted
            }
            p=p->next;
            temp=temp->next;
        }
   }
   }
   else                                   //If Node is not found
    printf("\nNode Not Found\n");
}

void Display(n* l,n* r)                    //Declaring function to Display Node
{
    if(l==NULL)                             //If Linked List is Empty
        printf("Empty\n");
    else
    {
        while(l!=NULL)
        {
            printf("%d  ",l->info);
            l=l->next;
        }
    }
    printf("\n");
}                                              //END OF PROGRAM
