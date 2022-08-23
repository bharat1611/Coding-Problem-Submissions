#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> v;
        ListNode *ptr = head;
        while(ptr != NULL){
            v.push_back(ptr->val);
            ptr = ptr ->next;
        }
        for(int i = v.size() - 1; i >= 0; i--){
            if(head -> val != v[i]) return false;
            head = head -> next;
        } 
        return true;
    }
};


class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
        ListNode *l2 = new ListNode(0);
        ListNode *temp = l2;
        ListNode *t1 = head;
        while(t1)
        {
            temp -> next = new ListNode(t1 -> val);
            temp = temp -> next;
            t1 = t1 -> next;
        }
        l2 = l2 -> next;            //Creating a copy of original LL
        ListNode *nxt = NULL, *curr = head, *prev = NULL;
        while(curr != NULL)         // Reversing the Linked List
        {
            nxt = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = nxt;
        }
        while(prev && l2)           // Checking if both have the same values
        {
            if(l2 -> val != prev -> val)
                return false;
            l2 = l2 -> next;
            prev = prev -> next;
        }
//         while(prev != NULL)
//         {
//             cout << prev -> val <<  " ";
//             prev = prev -> next; 
//         }
//         cout << endl;
//         while(l2 != NULL)
//         {
//             cout << l2 -> val << " " ;
//             l2 = l2 -> next;
//         }
        return true;
    }
};