class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        int n = nums.size();
        for(int i = 0 ; i < n; i++)
        {
            nums.insert(nums.begin() + n + i, nums[i]);
        }
        return nums;  
    }
};