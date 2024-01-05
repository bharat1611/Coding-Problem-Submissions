// class Solution {
// public:
//     void sortColors(vector<int>& arr) {
        
//         int c0 = 0, c1 = 0, c2 = 0;
//         for(int i = 0 ; i < nums.size(); i++)
//         {
//             if(nums[i] == 0) c0++;
//             else if(nums[i] == 1) c1++;
//             else c2++;
//         }
//         for(int i = 0 ; i < nums.size(); i++)
//         {
//             if(c0 > 0){
//                 nums[i] = 0;
//                 --c0;
//             }
//             else if(c0 <= 0 and c1 >0){
//                 nums[i] = 1;
//                 --c1;
//             }
//             else
//                 nums[i] = 2;
//         }
//     }
// };

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size() - 1;
        while(mid <= high)
        {
            if(nums[mid] == 0)
            {
                swap(nums[mid], nums[low]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1)
                mid++;
            else{
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};