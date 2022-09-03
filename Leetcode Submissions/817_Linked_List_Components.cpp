class Solution {
public:
    int numComponents(ListNode* head, vector<int>& nums) {
        set<int> s;
        for(auto i : nums)
            s.insert(i);
        int count = 0;
        while(head)
        {
            if(s.find(head -> val) == s.end())
            {
                head = head -> next;
            }
            else
            {
                while(head and s.find(head -> val) != s.end())
                    head = head -> next;
                
                count++;
            }
        }
        return count;
    }
};