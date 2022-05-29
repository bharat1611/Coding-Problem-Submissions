class Solution {
public:
    ListNode* sortList(ListNode* head) {
        priority_queue<int, vector<int>,greater<int>> v;
        ListNode *temp = head;
        while(temp != NULL)
        {
            v.push(temp->val);
            temp = temp -> next;
        }
        temp = head;
        while(temp != NULL)
        {
            temp -> val =  v.top();
            v.pop();
            temp = temp ->next;
        }
        return head;
    }
};