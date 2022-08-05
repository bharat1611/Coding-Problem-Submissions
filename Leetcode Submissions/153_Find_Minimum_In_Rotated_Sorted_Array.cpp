
// class Solution {
// public:
//     int findMin(vector<int>& nums) {
//         int n = nums.size();
//         for(int i = 0 ; i < n - 1; i++)
//         {
//             if(nums[i] > nums[i + 1])
//                 return nums[i + 1];
//         }
//         return nums[0];
//     }
// };


class Solution { 
public: 
    int findMin(vector<int>&nums)
    {
        if(nums.size() == 1)
            return nums[0];
        int left = 0, right = nums.size() - 1;
        
        //Checking if there is any rotation 
        // if first element is smaller than the last means there is no rotation
        if(nums[left] < nums[right])
            return nums[left];
        
        // coming here means there is a rotation, so find inflection point
        
        while(left <= right)
        {
            int mid = left + (right - left)/2;
            
            if(nums[mid] > nums[mid + 1])
                return nums[mid + 1];
            
            if(nums[mid] < nums[mid - 1])
                return nums[mid];
            
            if(nums[mid] > nums[0])
                left = mid + 1;
            else
                right = mid - 1;
        }
        return -1;
    }
};