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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> v;
        while(head)
        {
            v.push_back(head -> val);
            head = head -> next;
        }
        vector<int> cric;
        int min_e = INT_MAX;
        for(int i = 1 ; i < v.size() - 1; i++)
        {
            if(v[i] > v[i + 1] and v[i] > v[i - 1])
                cric.push_back(i);
            if(v[i] < v[i - 1] and v[i] < v[i + 1]){
                cric.push_back(i);
            }
        }
        if(cric.size() <= 1)
            return {-1, - 1};
        sort(cric.begin(), cric.end());
        for(auto i : cric)
            cout << i << " ";
        for(int i = 1 ; i < cric.size(); i++)
        {
            min_e = min(cric[i] - cric[i - 1], min_e);
        }
        int max_dist = cric[cric.size() - 1] - cric[0];
        return {min_e, max_dist};
    }
};