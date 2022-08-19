class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        map<int, int> m;
        
        ListNode * temp = head;
        while(temp != NULL)
        {
            m[temp->val]++;
            temp = temp -> next;
        }
        
        ListNode *dummy = new ListNode(0);
        ListNode *t = dummy;
        for(auto i : m)
        {
            if(i.second == 1){
                t -> next= new ListNode(i.first);
                t = t-> next;
            }
            else 
                continue;  
        }
        return dummy->next;
    }
};