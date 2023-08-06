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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        
        if(head -> next == NULL)
            return head;
        ListNode *newL = new ListNode(0);
        ListNode *t = newL;
        
        while(head and head -> next)
        {
            int a = head -> val;
            int b = head -> next -> val;
            t-> next = new ListNode(a);
            t = t -> next;
            t -> next = new ListNode(__gcd(a, b));
            t = t-> next;
            head = head -> next;
        }
        
        int a = head -> val;
        t-> next = new ListNode(a);
        t = t -> next;
        return newL -> next;
    }
};