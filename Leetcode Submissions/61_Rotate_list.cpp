#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        
        vector<int> v;
        ListNode *temp = head;
        while(temp)
        {
            v.push_back(temp -> val);
            temp = temp -> next;
        }
        int start = 0;
        
        // Handling all the corner cases
        
        if(v.size() == 1)
            return head;
        if(k == 0 || head == NULL)
            return head;
        if(k != 1 and k%v.size() == 0)
            return head;
        
        // After Handling corner cases, to actually reverse the list
        
        if(k < v.size())
            start = v.size() - k;
        if(k > v.size())
            start = v.size() - k % (v.size());
        
        ListNode *list2 = new ListNode(0);
        temp = list2;
        int original = start;
        do
        {
            temp -> next = new ListNode(v[start]);
            temp = temp -> next;
            start++;
            if(start == v.size())
                start = 0;
        }
        while(start != original);
        
        return list2 -> next;
    }
};