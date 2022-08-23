class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        ListNode *temp = head;
        priority_queue<int, vector<int>, greater<int>> pq;
        while(temp != NULL)
        {
            pq.push(temp ->val);
            temp = temp -> next;
        }
        ListNode *l2 = new ListNode(0);
        temp = l2;
        while(!pq.empty())
        {
            temp -> next = new ListNode(pq.top());
            pq.pop();
            temp = temp -> next;
        }
        return l2 -> next;
    }
};

class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        ListNode *nxt = head -> next;
        while(nxt != NULL)
        {
            ListNode *curr = head;
            while(curr != nxt)
            {
                if(nxt -> val < curr -> val)
                    swap(curr -> val, nxt -> val);
                
                curr = curr -> next;
            }
            nxt = nxt -> next;   
        }
        return head;
    }
};
    