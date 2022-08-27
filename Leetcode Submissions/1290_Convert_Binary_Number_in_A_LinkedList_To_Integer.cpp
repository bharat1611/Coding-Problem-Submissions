#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        
        int count = 0;
        ListNode *temp = head;
        while(temp)
        {
            count++;
            temp = temp -> next;
        }
        int sum = 0;
        count--;
        while(head)
        {
            sum += (head ->val) * pow(2, count);
            count--;
            head = head -> next;
        }
        return sum;
    }
};