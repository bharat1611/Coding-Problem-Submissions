class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        sort(nums.begin(), nums.end());
        int ans = 0;
        int curr = 1;
        for(int i = 0 ; i < nums.size() - 1; i++)
        {
            if(nums[i] == nums[i + 1]){
                continue;
            }
            else
            {
                if(nums[i] == nums[i + 1] - 1)
                    curr++;
                else
                {
                    ans = max(curr, ans);
                    curr = 1;
                }
            }
        }
        return max(ans, curr);
    }
};

// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         unordered_map<int, int> mp;
//         for(auto i: nums)
//             mp[i]++;
//         int curr = 0, ans = 0;
//         for(int i = 0 ; i < nums.size(); i++)
//         {
//             int curr = 1;
//             int j = i;
//             while(mp.find(nums[j]) != mp.end() or mp.find(nums[j] + 1) != mp.end())
//             {
//                 curr++;
//                 j++;
//             }
//             ans = max(ans, curr);
//         }
//         return ans;
//     }
// };