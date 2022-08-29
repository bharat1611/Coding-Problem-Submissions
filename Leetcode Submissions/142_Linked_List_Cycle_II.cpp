class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        map<ListNode*, int> mp;
        
        ListNode *temp = head;
        int i = 0;
        ListNode *ans = NULL;
        while(temp)
        {
            if(mp.find(temp) == mp.end())
            {
                mp.insert({temp , i});
                temp = temp -> next;
                i++;
            }
            else{
                ans = temp;
                break;
            }
        }
        return ans;
    }
};