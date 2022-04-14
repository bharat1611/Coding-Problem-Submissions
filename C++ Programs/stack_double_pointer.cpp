#include <iostream>
using namespace std;
typedef struct node
{
    int info;
    struct node *next;
}n;

void ins(n**,int);
void disp(n*);

int main()
{
    n* l=NULL;
    int ch,num;
    do
    {
        cout<<endl;
        cout<<"1 - Insert "<<endl;
        cout<<"2 - Display "<<endl;
        cout<<"Enter your choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"Enter the number to be inserted : ";
            cin>>num;
            ins(&l,num);
            break;
        case 2:
            disp(l);
            break;
        }
    }while(ch<=2);
}

void ins(n** top,int num)
{
    n* p=NULL;
    p=(n*)malloc(sizeof(n));
    if(p==NULL)
    {
        cout<<"Empty\n";
    }
    else
    {
        p->info=num;
        if(*top==NULL)
        {
            p->next=NULL;
            *top=p;
        }
        else
        {
            p->next=(*top);
            (*top)=p;
        }
    }
}
void disp(n *l)
{
    if(l==NULL)
    {
        cout<<"Empty"<<endl;
    }
    else
    {
        while(l!=NULL)
        {
            cout<<l->info<<endl
            ;
            l=l->next;
        }
    }
}

