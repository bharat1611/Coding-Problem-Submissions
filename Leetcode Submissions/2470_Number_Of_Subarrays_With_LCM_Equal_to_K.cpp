class Solution {
public:
    int subarrayLCM(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0, lcm_curr = 1;
        for(int i = 0 ; i < n; i++)
        {
            int j = i;
            lcm_curr = 1;
            while(j < n and lcm_curr <= k){
                lcm_curr = std::lcm(nums[j], lcm_curr);
                if(lcm_curr == k)
                    count++;
                j++;
            }
        }
        return count;
    }
};