#include <stdlib.h>
#include <iostream>
using namespace std;

typedef struct NodeList
{
    int val;
    struct NodeList *next;
}node;

void insert(node** head, int num)
{
    node *p = (node*)malloc(sizeof(node));
    p -> val = num;
    p -> next = (*head);
    (*head) = p;
}

void display(node *head)
{
    node *ptr = head;
    while(ptr!= NULL)
    {
        cout << ptr->val << " " ;
        ptr = ptr -> next;
    }
}

void palindrome(node *head)
{
    node *org = head;
    node *prev = NULL, *curr = head, *nxt = NULL;
    int flag = 0;
    while(curr != NULL)
    {
        nxt = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = nxt;
    }
    cout<<endl;
    display(prev);
    cout<<endl;
    display(org);
    while(head != NULL)
    {
        if(head->val != prev-> val){
            flag = 1;
            break;
        } 

        head = head -> next;
        prev = prev ->next;   
    }
    if(flag)
    cout<<"Palindrome";
    else
    cout<<"Not Palindrome";
}

void reverse(node*);
int main()
{
    node *head = NULL;
    int num = 0, i = 0;
    while(i < 5){
        cin >> num;
        insert(&head, num);
        i++;
    }
    display(head);
    palindrome(head);
}