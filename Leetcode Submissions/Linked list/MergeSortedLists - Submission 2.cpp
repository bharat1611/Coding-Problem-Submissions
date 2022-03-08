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

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        ListNode* list3 = nullptr;
        ListNode* t3 = list3;
        
        if(list1 == nullptr && list2 == nullptr)
            return list1;
        else if(list1 == nullptr)
            return list2;
        else if(list2 == nullptr)
            return list1;
        
        while(list1 != nullptr && list2 != nullptr)
        {
            if(list1->val < list2->val)
            {
                if(t3 == nullptr)
                {
                    t3 = list1;
                    list3 = t3;
                    list1 = list1->next;
                    t3->next = nullptr;
                }
                else
                {
                    t3->next = list1;
                    list1 = list1->next;
                    t3 = t3->next;
                    t3->next = nullptr;
                }
                
            }
            else
            {
                if(t3 == nullptr)
                {
                    t3 = list2;
                    list3 = t3;
                    list2 = list2->next;
                    t3->next = nullptr;
                }
                else
                {       
                    t3->next = list2;
                    list2 = list2->next;
                    t3 = t3->next;
                    t3->next = nullptr;
                }
            }
        }
        if(list1 == nullptr)
        {
            t3->next = list2;    
        }
        else
        {
            t3->next = list1;
        }
        
        return list3;

    }
};