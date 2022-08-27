#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int count = 0;
        ListNode *temp = head;
        vector<ListNode*> v;
        while(temp)
        {
            count++;
            temp = temp -> next;
        }
        
        int nodes = count/k;
        int rem = count % k;
        
        ListNode *prev = NULL, *curr = head;
        int x = -1;
        while(curr != NULL)
        {
            v.push_back(curr);
            if(rem > 0)
                x = nodes + 1;
            else
                x = nodes;
            
            while(x > 0)
            {
                prev = curr;
                curr = curr -> next;
                x--;
            }
            prev -> next = NULL;
            rem--;
        }
        while(v.size() < k)
            v.push_back(NULL);
        
        return v;
        
    }
};