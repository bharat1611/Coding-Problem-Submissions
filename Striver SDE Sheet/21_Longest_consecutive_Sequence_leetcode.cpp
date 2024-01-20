// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         if(nums.size() == 0)
//             return 0;
//         sort(nums.begin(), nums.end());
//         int ans = 0;
//         int curr = 1;
//         for(int i = 0 ; i < nums.size() - 1; i++)
//         {
//             if(nums[i] == nums[i + 1]){
//                 continue;
//             }
//             else
//             {
//                 if(nums[i] == nums[i + 1] - 1)
//                     curr++;
//                 else
//                 {
//                     ans = max(curr, ans);
//                     curr = 1;
//                 }
//             }
//         }
//         return max(ans, curr);
//     }
// };

// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {

//         if(nums.size() == 0)
//             return 0;
//         unordered_map<int, int> mp;
//         for(auto &i: nums)
//             mp[i]++;
//         int ans = 1, count = 1;
//         for(int i = 0; i < nums.size(); i++)
//         {
//             if(mp.find(nums[i] - 1) != mp.end()){
//                 continue;
//             }
//             else
//             {
//                 int k = nums[i];
//                 while(mp.find(k + 1) != mp.end()){
//                     k++;
//                     count++;
//                 }
//                 ans = max(count, ans);
//                 count = 1;
//             }
//         }
//         return ans;
//     }
// };

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        unordered_set<int> st;
        for(auto i : nums)
            st.insert(i);
        int ans = 1, count = 1;
        for(int i = 0 ; i < nums.size(); i++)
        {
            if(st.find(nums[i] - 1) == st.end()){
                int k = nums[i] + 1;
                while(st.find(k) != st.end()){
                    k++;
                    count++;
                }
                ans = max(count, ans);
                count = 1;
            }
        }
        return ans;
    }
};