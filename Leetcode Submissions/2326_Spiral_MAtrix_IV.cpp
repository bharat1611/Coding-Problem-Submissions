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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        
        vector<vector<int>> v(m, vector<int>(n, -1));
        int top = 0, down = m - 1, right = n - 1, left = 0;
        int dir = 0;
        while(left <= right and top <= down and head)
        {
            if(dir == 0)
            {
                for(int i = left; i <= right; i++)
                {
                    v[top][i] = head -> val;
                    head = head -> next;
                    if(head == NULL)
                        break;
                }
                top++;
                dir = 1;
            }
            else if(dir == 1)
            {
                for(int i = top; i <= down; i++)
                {
                    v[i][right] = head -> val;
                    head = head -> next;
                    if(head == NULL)
                        break;
                }
                right--;
                dir = 2;
            }
            else if(dir == 2)
            {
                for(int i = right; i >= left; i--)
                {
                    v[down][i] = head -> val;
                    head = head -> next;
                    if(head == NULL)
                        break;
                }
                down--;
                dir = 3;
            }
            else if(dir == 3)
            {
                for(int i = down; i >= top; i--)
                {
                    v[i][left] = head -> val;
                    head = head -> next;
                    if(head == NULL)
                        break;
                }
                left++;
                dir = 0;
            }
        }
        return v;
    }
};