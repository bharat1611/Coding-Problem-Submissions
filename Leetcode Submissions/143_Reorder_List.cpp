/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
        vector<int> v;
        ListNode *temp = head;
        while(temp)
        {
            v.push_back(temp -> val);
            temp = temp -> next;
        }
        if(v.size() == 1)
            return;
        int i = 0, j = v.size() - 1;
        ListNode *list = new ListNode(0);
        temp = list;
        bool flag = true;
        while(i <= j)
        {
            if(flag)
            {
                temp -> next = new ListNode(v[i]);
                temp = temp -> next;
                i++;
            }
            else
            {
                temp -> next = new ListNode(v[j]);
                temp = temp -> next;
                j--;
            }
            flag = !flag;
        }
        temp = head;
        list = list -> next;
        while(temp)
        {
            temp -> val = list -> val;
            list = list -> next;
            temp = temp -> next;
        }
    }
};