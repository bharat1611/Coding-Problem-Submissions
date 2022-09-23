class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int i = 0;
        while(i < n)
        {
            if(nums[i] == nums[i + 1])
                return nums[i];
            i++;
        }
        return -1;
    }
};