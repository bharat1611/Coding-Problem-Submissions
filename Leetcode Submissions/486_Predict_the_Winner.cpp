class Solution {
public:
    int count(vector<int>&nums, int i, int j, int chance)
    {
        if(i > j)
            return 0;
        
        if(chance == 0)
            return max(nums[i] + count(nums, i + 1, j , 1), nums[j] + count(nums, i, j - 1, 1));
        else
            return min(count(nums, i + 1, j , 0), count(nums, i, j - 1, 0));
    }
    
    bool PredictTheWinner(vector<int>& nums) {
        long long int p2 = 0, p1 = 0;
        
        for(int i = 0 ; i < nums.size(); i++)
            p2 += nums[i];
        
        p1 = count(nums, 0, nums.size() - 1, 0);
        p2 = p2 - p1;
        if(p1 >= p2)
            return true;
        return false;
    }
};