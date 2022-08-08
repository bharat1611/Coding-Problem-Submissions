/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        int c = 0;
        while(head != NULL)
        {
            c++;
            
            if(c > 10000)
                return true;
            head = head -> next;
        }
        return false;
    }
};