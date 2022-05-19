#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *temp = head;
        if(!head || !head->next)
            return head;
        
        while(head && head->next)
        {
            if(head->val == head->next->val)
                head->next = head->next->next;
            else
                head = head->next;
        }
        return temp;
    }
};
