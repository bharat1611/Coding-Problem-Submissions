class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        long long sum = 0;
        unordered_map<int, int> check;
        
        for(int i = 0 ; i < nums.size(); i++)
        {
            if(nums[i] <= k and check[nums[i]] == 0)
            {
                k++;
                sum -= nums[i];
                check[nums[i]] = 1;
            }
        }
        sum += (long long)k*(k + 1)/2;
        return sum;
    }
};