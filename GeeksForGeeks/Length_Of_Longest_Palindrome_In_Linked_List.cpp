//{ Driver Code Starts
// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

void append(struct Node** head_ref, struct Node **tail_ref,
            int new_data)
{
    struct Node* new_node = new Node(new_data);
    
    if (*head_ref == NULL)
        *head_ref = new_node;
    else
        (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}

/* Function to get the middle of the linked list*/
int maxPalindrome(Node *);


/* Driver program to test above function*/
int main()
{
    int T,n,l;
    cin>>T;

    while(T--)
    {
        struct Node *head = NULL,  *tail = NULL;

        cin>>n;
        for (int i=1; i<=n; i++)
        {
            cin>>l;
            append(&head, &tail, l);
        }
      

       cout << maxPalindrome(head)<<endl;
    }
    return 0;
}



// } Driver Code Ends


/* The Node is defined 
  /* Link list Node
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};
*/

/*The function below returns an int denoting
the length of the longest palindrome list. */

int count (Node *first, Node *second) 
{
    Node *a = first;
    Node *b = second;
    
    int count = 0;
    
    while(a != NULL && b != NULL){
        if(a->data == b->data){
            a = a->next;
            b = b->next;
            count++;
        }else{
            break;
        }
    }return count;
}
int maxPalindrome(Node *head)
{
    Node *curr = head;
    Node *prev = NULL;

    int ans = 0;
    
    while(curr != NULL){
        Node *next = curr->next;
        curr->next = prev;
        
        ans = max(ans, 2*count(prev, next)+1);
        ans = max(ans, 2*count(curr, next));
        
        prev = curr;
        curr = next;
    }return ans;
}