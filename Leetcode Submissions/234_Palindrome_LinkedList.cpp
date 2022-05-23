#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> v;
        ListNode *ptr = head;
        while(ptr != NULL){
            v.push_back(ptr->val);
            ptr = ptr ->next;
        }
        for(int i = v.size() - 1; i >= 0; i--){
            if(head -> val != v[i]) return false;
            head = head -> next;
        } 
        return true;
    }
};