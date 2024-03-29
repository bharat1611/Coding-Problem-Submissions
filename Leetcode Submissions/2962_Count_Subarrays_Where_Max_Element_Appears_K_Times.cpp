class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int max_e = INT_MIN;
        for(int i = 0 ; i < nums.size(); i++)
            max_e = max(max_e, nums[i]);
        
        long long subs = 0;
        int start = 0, count = 0;
        for(int end = 0; end < nums.size(); end++)
        {
            if(nums[end] == max_e)
                count++;
            
            while(count == k)
            {
                if(nums[start] == max_e)
                    count--;
                start++;
                // subs += end - start + 1;
            }
            subs += start;
        }
        return subs;
    }
};