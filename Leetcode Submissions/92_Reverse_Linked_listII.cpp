class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int> v;
        while(head)
        {
            v.push_back(head -> val);
            head = head -> next;
        }
        reverse(v.begin() + left - 1, v.begin() + right );
        for(auto i : v)
            cout << i << " ";
        ListNode *dummy = new ListNode(0);
        ListNode *temp = dummy;
        for(int i = 0 ; i < v.size(); i++)
        {
            temp -> next = new ListNode(v[i]);
            temp = temp -> next;
        }
        return dummy -> next;
    }
};