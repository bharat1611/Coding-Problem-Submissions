class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        int count = 0;
        for(int i = 0 ; i < nums.size() - 1; i++)
        {
            if(nums[i] == nums[i + 1])
            {
                count++;
                nums.erase(nums.begin() + i);
                nums.erase(nums.begin() + i);
                if(nums.size() == 0)
                    break;
                i--;
            }
        }
        int n  = nums.size();
        return {count, n};
    }
};