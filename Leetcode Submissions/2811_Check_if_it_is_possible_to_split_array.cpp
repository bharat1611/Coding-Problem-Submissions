// class Solution {
// public:
//     bool canSplitArray(vector<int>& nums, int m) {
        

//         int leftSum = 0, rightSum = 0;
//         int i = 0, j = nums.size() - 1;
//         while(i < j)
//         {
//             for(int a = 0; a < j; a++)
//                 leftSum += nums[a];
            
//             for(int b = j; b > i; b--)
//                 rightSum += nums[b];
            
//             if(leftSum >= m or rightSum >= m)
//                 return true;
            
//             i++, j--;
//         }
//         return nums.size() <= 2;
//     }
// };


class Solution {
    public:

	bool canSplitArray(vector<int> &nums, int m) {
        
		for (int i = 1; i < nums.size(); i++) {
			if (nums[i - 1] + nums[i] >= m) {
				return true;
			}
		}
		return nums.size() <= 2;
	}
};