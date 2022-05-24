class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = 0, n = nums.size() - 1;
        while(i < n)
        {
            if(nums[i] == nums[i + 1]) return true;
            i++;
        }
        return false;
    }
};