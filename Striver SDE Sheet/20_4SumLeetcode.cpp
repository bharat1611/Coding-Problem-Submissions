class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        set<vector<int>> st;
        for(int i = 0 ; i < n - 3; i++)
        {
            
            for(int j = i + 1; j < n - 2; j++)
            {
                int left = j + 1, right = n - 1;
                while(left < right)
                {
                    long long sum = (long)nums[i] + nums[j] + nums[left] + nums[right];
                    if(sum < target)
                        left++;
                    else if(sum > target)
                        right--;
                    else {
                        st.insert({nums[i], nums[j], nums[left], nums[right]});
                        left++;
                    }
                }
            }
        }
        vector<vector<int>> ans;
        for(auto i : st)
            ans.push_back(i);
        return ans;
    }
};