class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int i = 0, j = n - 1;
        while(i < j)
        {
            if(-nums[i] == nums[j])
                return nums[j];
            if(-nums[i] < nums[j])
                j--;
            else
                i++;
        }
        return -1;
    }
};