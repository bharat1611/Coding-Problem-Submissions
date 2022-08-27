#include<bits/stdc++.h>
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
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        
        ListNode *l1 = new ListNode(0);
        ListNode *temp = l1;
        ListNode *l2 = new ListNode(0);
        ListNode *temp2 = l2;
        bool flag = true;
        while(head)
        {
            if(flag)
            {
                temp -> next = new ListNode(head -> val);
                temp = temp -> next;
            }
            else
            {
                temp2 -> next = new ListNode(head -> val);
                temp2 = temp2 -> next;
            }
            flag = !flag;
            head = head -> next;
        }
        temp -> next = l2 -> next;
        return l1 -> next;
    }
};