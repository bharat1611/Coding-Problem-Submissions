class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        
        ListNode *left = new ListNode(0);
        ListNode *right = new ListNode(0);
        
        ListNode *t1 = left;
        ListNode *t2 = right;
        while(head != NULL)
        {
            if(head -> val < x)
            {
                t1 -> next = new ListNode(head -> val);
                t1 = t1 -> next;
            }
            else
            {
                t2 -> next = new ListNode(head -> val);
                t2 = t2 -> next;
            }
            head = head -> next;
        }
        t1 -> next = right -> next;
        return left -> next;
    }
};