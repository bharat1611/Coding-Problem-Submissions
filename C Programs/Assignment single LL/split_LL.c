//START
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int info;                       //To store value of node
    struct node *next;              //To store address of node
}n;
n* Insert(n**,n**,int);             //Declaring function to Insert
void Split(n**,n**,n**,n**);        //Declaring function to Split
void Display(n*,n*);                //Declaring function to Display

int main()
{
    n* l1=NULL,*r1=NULL,*l2=NULL,*r2=NULL;  /*Declaring pointers for both linked list

                                            l1,r1 for 1st and l2,r2 for 2nd*/
    int ch,num;
    do
    {
        printf("\nEnter 1 to insert node");
        printf("\nEnter 2 to split the linked list");
        printf("\nEnter 3 to Display");
        printf("\nPlease enter your choice : ");
        scanf("%d",&ch);
        switch(ch)                          //Menu Driven
        {
        case 1:
            printf("Please enter the number : ");
            scanf("%d",&num);
            Insert(&l1,&r1,num);            //Calling function 'Insert' by reference
            break;
        case 2:
            Split(&l1,&r1,&l2,&r2);         //Calling function 'Split' by reference
            break;
        case 3:
            Display(l1,l2);                 //Calling function to Display both linked list
            break;
        }
    }while(ch<=3);
}

n* Insert(n** l,n** r,int num)              //Defining function to Insert
{
    n* p=NULL;
    p=(n*)malloc(sizeof(n));                //Initializing Memory Dynamically
    if(p==NULL)
        printf("Not Enough Memory\n");
    else
    {
        p->info=num;
        if(*l==NULL && *r==NULL)            //Condition for First Node
            *l=*r=p;
        else                                //For rest of the nodes
        {
            (*r)->next=p;
            *r=p;
        }
        (*r)->next=NULL;
    }
}

void Split(n **l1,n **r1,n **l2,n **r2)     //Defining function to Split linked List
{
    if(*l1==NULL && *r1==NULL)              //If Linked List is Empty
    {
        printf("Empty\n");
    }
    else                                    //If linked list is not empty
    {
        n *b=NULL,*c=NULL;
        *r2=*r1;
        c=(*l1);
        int index;
        printf("Enter the index for splitting : ");
        scanf("%d",&index);                 //Asking for Index from user
        if(index>0)
        {
            while(index--)                  //Executing loop till index=0
            {
                b=(c);
                c=c->next;
            }
            (*r1)=b;
            (*l2)=b->next;
            (*r1)->next=NULL;
        }
        else                                //if Index is 0
        {
            return;
        }
    }
}
void Display(n *l1,n*l2)                    //Defining function to display both Linked Lists
{
    printf("\n");
    if(l1==NULL)                            //If Linked List is empty
        printf("Empty\n");
    else
    {
        printf("1st Part : ");
    while(l1!=NULL)                          //Printing first part of Linked List
    {
        printf("%d ",l1->info);
        l1=l1->next;
    }
    printf("\n");
    printf("2nd Part : ");
    while(l2!=NULL)                           //Printing second part of Linked List
    {
        printf("%d ",l2->info);
        l2=l2->next;
    }
    }
    printf("\n");
}                                               //END


