// class Solution {
// public:
//     void wiggleSort(vector<int>& nums) {
//         bool flag = true;
//         for(int i = 1 ; i < nums.size(); i++)
//         {
//             if(flag)
//             {
//                 if(nums[i] < nums[i - 1])
//                     swap(nums[i], nums[i - 1]);
//             }
//             else
//                 if(nums[i] > nums[i - 1])
//                     swap(nums[i], nums[i - 1]);
            
//             flag = !flag;
//         }
//     }
// };

class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        priority_queue<int> pq(nums.begin(), nums.end());
        for(int i = 1 ; i < nums.size(); i = i + 2)
        {
            nums[i] = pq.top();
            pq.pop();
        }
        for(int i = 0; i < nums.size(); i = i + 2)
        {
            nums[i] = pq.top();
            pq.pop();
        }
    }
};