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
    vector<int> v;
    Solution(ListNode* head) {
        while(head)
        {
            v.push_back(head -> val);
            head = head -> next;
        }
    }
    
    int getRandom() {
        int n = v.size();
        int r = rand()%n;
        return v[r];
    }
};


class Solution {
public:
    ListNode *h = NULL;
    int len = 0;
    
    Solution(ListNode* head) {
        h = head;
        ListNode *temp = head;
        while(temp)
        {
            len++;
            temp = temp -> next;
        }
    }
    
    int getRandom() {
        int ran = rand() % len;
        ListNode *temp = h;
        for(int i = 0 ; i < ran; i++)
        {
            temp = temp -> next;
        }
        return temp -> val;
    }
};

class Solution{
public:
    ListNode *head = NULL;

    Solution(ListNode *h){
        head = h;
    }
    
    int getRandom(){
        ListNode *curr = head;
        ListNode *res;
        int n = 1;
        while (curr)
        {
            if (rand() % n == 0)
                res = curr;
            curr = curr->next;
            n++;
        }
        return res->val;
    }
};
