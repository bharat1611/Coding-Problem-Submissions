class Solution {
public:
    ListNode* mergeInBetween(ListNode* head, int a, int b, ListNode* list2) {        
        int count = 0;
        ListNode *traverse = head, *prev = NULL;
        ListNode *endp = NULL;
        while(count < b)
        {
            count++;
            traverse = traverse -> next;
        }
        endp = traverse -> next;
        traverse = head;
        count = 0;
        while(count < a)
        {
            count++;
            prev = traverse;
            traverse = traverse -> next;
        }
        prev -> next = list2;
        traverse = head;
        while(traverse -> next)
        {
            traverse = traverse -> next;
        }
        traverse -> next = endp;
        return head;
    }
};