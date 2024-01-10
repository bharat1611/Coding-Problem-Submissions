// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         for(int i = 0 ; i < nums.size() - 1;i++)
//         {
//             if(nums[i] == nums[i + 1])
//                 return nums[i];
//         }
//         return nums[0];
//     }
// };

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        vector<int> freq(n + 1, 0);
        for(int i = 0 ; i < nums.size(); i++){
            if(freq[nums[i]] == 0)
                freq[nums[i]]++;
            else
                return nums[i];
        }
        return nums[0];
    }
};
