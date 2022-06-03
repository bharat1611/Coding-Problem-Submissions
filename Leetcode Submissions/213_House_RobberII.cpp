class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1)
            return nums[0];
        if(n == 2)
            return max(nums[0], nums[1]);
        if(n == 3)
            return *max_element(nums.begin(), nums.end());
        
        vector<int>v1(n);
        v1[0] = nums[0];
        v1[1] = nums[1];
        v1[2] = nums[0] + nums[2];
        for(int i = 3 ; i < n - 1; i++)
            v1[i] = nums[i] + max(v1[i - 2], v1[i - 3]);
        int v1_max = max(v1[n-2], v1[n-3]);
        
        vector<int>v2(n);
        v2[0] = 0;
        v2[1] = nums[1];
        v2[2] = nums[2];
        for(int i = 3 ; i < n; i++)
            v2[i] = nums[i] + max(v2[i -2], v2[i - 3]);
        int v2_max = max(v2[n - 1], v2[n-2]);
        return max(v1_max, v2_max);
    }
};