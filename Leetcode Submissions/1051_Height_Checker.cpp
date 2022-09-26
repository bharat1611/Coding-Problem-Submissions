class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> nums(heights);
        sort(nums.begin(), nums.end());
        int count = 0;
        for(int i = 0 ; i < heights.size();i++)
        {
            if(heights[i] != nums[i])
                count++;
        }
        return count;
    }
};