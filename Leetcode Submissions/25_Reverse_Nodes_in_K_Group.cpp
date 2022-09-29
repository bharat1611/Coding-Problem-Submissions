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
    void rev(vector<int> &v, int start, int end)
    {
        while(start <= end)
        {
            swap(v[start], v[end]);
            start++;
            end--;
        }
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int> v;
        while(head)
        {
            v.push_back(head -> val);
            head = head -> next;
        }
        int n = v.size();
        int i = 0;
        while(i < n)
        {
            if(i + k -1< n)
                rev(v, i, i + k - 1);
            i = i + k;
        }
        ListNode *list2 = new ListNode(0);
        ListNode *temp = list2;
        for(int i = 0 ; i < n; i++)
        {
            temp -> next = new ListNode(v[i]);
            temp = temp -> next;
        }
        return list2 -> next;
    }
};