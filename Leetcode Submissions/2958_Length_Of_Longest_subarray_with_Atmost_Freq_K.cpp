class Solution
{
public:
    int maxSubarrayLength(vector<int> &nums, int k)
    {
        int n = nums.size();
        unordered_map<int, int> freq;
        int end = 0;
        int start = 0;
        int ans = INT_MIN;
        while (end < n && start < n)
        {
            freq[nums[end]]++;
            while (start < end && freq[nums[end]] > k)
            {
                freq[nums[start]]--;
                start++;
            }
            ans = max(ans, end - start + 1);
            end++;
        }

        return ans;
    }
};