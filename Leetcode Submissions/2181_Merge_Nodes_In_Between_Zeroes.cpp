class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        vector<int> ans;
        ListNode* temp = head;
        
        while(temp)
        {
            ans.push_back(temp -> val);
            temp = temp -> next;
        }
        int i = 0;
        ListNode *dummy = new ListNode(0);
        temp = dummy;
        int sum = 0;
        while(i < ans.size())
        {
            if(ans[i] == 0){
                i++;
                sum = 0;
            }
            else
            {
                while(ans[i] != 0)
                {
                    sum += ans[i];
                    i++;
                }
                temp -> next = new ListNode(sum);
                temp = temp -> next;
            } 
        }
        return dummy-> next;
        
    }
};