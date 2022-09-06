class Solution {
public:
// Function to find the reverse of linked List.
    ListNode *reverse(ListNode *head)
    {
        ListNode *prev = NULL, *curr = head, *nxt = NULL;
        while(curr)
        {
            nxt = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
    
    int pairSum(ListNode* head) {
        ListNode *slow = head, *fast = head -> next;
        int max_sum = INT_MIN;
        
        while(fast and fast -> next)
        {
            slow = slow -> next;
            fast = fast -> next -> next;
        }
		// Passing the middle of the linked list in the reverse function 
		// Storing the reversed Linked list in prev.
        ListNode *prev = reverse(slow);
        while(head and prev)
        {
            max_sum = max(max_sum, (head -> val + prev -> val));
            head = head -> next;
            prev = prev -> next;
        }
        return max_sum;
    }
};