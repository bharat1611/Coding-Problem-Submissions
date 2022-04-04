#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *node1 = head, *node2 = head;    //node1 to find the kth element from the start
                                                  // node22 to find the kth element from the end
        int nodes= 0, temp = 0,t1= 0, t2 = 0;
        
        while(node1!= NULL)                         // counting the total number of nodes
        {
            nodes++;
            node1 = node1->next;
        }                                        // checking if k is greater than number of nodes in the LL
        if(k > nodes)
            return head;

        t1= k - 1;                              // t1 = finding kth element from start
        node1 = head;
        while(t1--)                             // assigning node1 to kth element from start
            node1 = node1 ->next;
        
        t2 = nodes - k;                         // t2 = finding kth element from the end
        while(t2--)
            node2 = node2->next;                // assigning node 2 to kth element from end
                                                // swapping the values of node1 and node2
        temp = node1->val;
        node1 ->val = node2 ->val;
        node2 ->val = temp;
        
        return head;
    }
};

// class Solution {
// public:
//     int counts(ListNode* head){
//         ListNode *temp=head;
//         int count=0;
//         while(temp){
//             temp=temp->next;
//             count++;
//         }
//         return count;
//     }
//     ListNode* swapNodes(ListNode* head, int k) {
//         ListNode *curr1=head;
//         ListNode *curr2=head;
//         int n=counts(head);
//         if(n==1)return head;
//         int t1=k;
//         int t2=n+1-k;
//         while(t1-->1){
//             curr1=curr1->next;
//         }
//         while(t2-->1){
//             curr2=curr2->next;
//         }
//         int val1=curr1->val,val2=curr2->val;
//         curr1->val=val2;
//         curr2->val=val1;
//         return head;
//     }
// };