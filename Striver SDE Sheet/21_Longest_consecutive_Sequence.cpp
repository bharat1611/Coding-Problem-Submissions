// #include <bits/stdc++.h>

// int lengthOfLongestConsecutiveSequence(vector<int> &nums, int n) {
//     sort(nums.begin(), nums.end());
//     int ans = 1, curr = 1;
//     for(int i = 0 ; i < nums.size() - 1; i++){
//         if(nums[i] == nums[i + 1]){
//             continue;
//         }
//         else{
//             if (nums[i] == nums[i + 1] - 1) {
//               curr++;
//             } else {
//               ans = max(ans, curr);
//               curr = 1;
//             }
//         }
//     }
//     return max(ans, curr);
// }

#include <bits/stdc++.h>
int lengthOfLongestConsecutiveSequence(vector<int> &nums, int n) {
    unordered_map<int, int> mp;
    for(auto &i: nums)
        mp[i]++;
    int ans = 1, count = 1;
    for(int i = 0; i < nums.size(); i++)
    {
        if(mp.find(nums[i] - 1) != mp.end()){
            continue;
        }
        else
        {
            int k = nums[i];
            while(mp.find(k + 1) != mp.end()){
                k++;
                count++;
            }
            ans = max(count, ans);
            count = 1;
        }
    }
    return ans;
}