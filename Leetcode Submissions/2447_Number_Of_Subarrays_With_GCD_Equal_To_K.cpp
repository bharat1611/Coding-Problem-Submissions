class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k) {
        int gcd_curr = 1, count = 0;
        int n = nums.size();
        for(int i = 0 ; i < n; i++)
        {
            int j = i;
            gcd_curr = 0;
            while(j < n)
            {
                gcd_curr = __gcd(gcd_curr, nums[j]);
                j++;
                if(gcd_curr == k)
                    count++;
            }
        }
        return count;
    }
};