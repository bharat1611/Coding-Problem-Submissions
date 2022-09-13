class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        
        unordered_set<int> st;
        int len = 0;
        int ans = INT_MIN;
        int sum = 0;
        for(int i = 0 ; i < nums.size(); i++)
        {
            while(len < i and st.find(nums[i]) != st.end())
                {
                    st.erase(nums[len]);
                    sum -= nums[len];
                    len++;
                }
            sum += nums[i];
            st.insert(nums[i]);
            ans = max(sum, ans);
        }
        return ans;
    }
};