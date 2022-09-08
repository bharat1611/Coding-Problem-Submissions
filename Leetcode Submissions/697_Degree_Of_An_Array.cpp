class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        map<int, int> first, last, count;
        // Maintaining 3 maps to store first occurence, last occurence and count of numbers
        for(int i = 0 ; i < nums.size(); i++)
        {
            if(first.count(nums[i]) == 0)
                first[nums[i]] = i;
            last[nums[i]] = i;
            count[nums[i]]++;
        }
        // Finding max frequency element of the array
        int max_count = 0;
        for(auto i : count)
            max_count = max(max_count, i.second);
        // ans = to store the ans
        int ans = INT_MAX;
        // Iterating over the map, and finding the min length of subarray containing the max freq element
        // last index - first index of max freq number is our answer
        for(auto i : count)
        {
            if(i.second == max_count)
            {
                ans = min(ans, last[i.first] - first[i.first] + 1);
            }
        }
        return ans;
    }
};