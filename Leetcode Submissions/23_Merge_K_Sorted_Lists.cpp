class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        priority_queue<int, vector<int>, greater<int>> pq;
        
        for(auto i : lists)
        {
            while(i != NULL)
            {
                pq.push(i -> val);
                i = i -> next;
            }
        }
        ListNode *head = new ListNode(0);
        ListNode *temp = head;
        while(!pq.empty())
        {
            temp -> next = new ListNode(pq.top());
            pq.pop();
            temp = temp -> next;
        }
        return head -> next;
        
    }
};