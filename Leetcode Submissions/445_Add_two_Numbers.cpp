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
    ListNode *rev(ListNode *l)
    {
        ListNode *prev = NULL, *curr = l, *nxt = NULL;
        while(curr)
        {
            nxt = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        l1 = rev(l1);
        l2 = rev(l2);
        ListNode *newL = new ListNode(0);
        ListNode *node = newL;
        int sum = 0, carry = 0;
        
        while(l1 or l2 or carry)
        {
            sum = 0;
            if(carry == 1)
            {
                sum += carry;
                carry = 0;
            }
            if(l1)
            {
                sum += l1 -> val;
                l1 = l1->next;
            }
            if(l2){
                sum += l2 -> val;
                l2 = l2 -> next;
            }
            if(sum > 9)
            {
                sum %=10;
                carry = 1;
            }
            node -> next = new ListNode(sum);
            node = node -> next;
        }
        newL -> next = rev(newL -> next);
        return newL -> next;
    }
};