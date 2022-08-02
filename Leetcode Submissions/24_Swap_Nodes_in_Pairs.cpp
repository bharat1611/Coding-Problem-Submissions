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
 #include <bits/stdc++.h>
 using namespace std;
 
class Solution {
public:

    ListNode* swapPairs(ListNode* head) {
        if (head == nullptr || head->next == nullptr) 
        {
            return head;
        }
        
        ListNode * prev = nullptr;
        ListNode * curr = head;
        ListNode * nextt = head->next;
        
        head = head->next;
        
        while (curr != NULL && nextt != NULL) 
        {
            if (prev != NULL)
                    prev->next = nextt;
            curr->next = nextt->next;
            nextt->next = curr;
            prev = curr;
            curr = curr->next;
            if (curr != NULL)
                nextt = curr->next;
        }
        return head;
    }
};