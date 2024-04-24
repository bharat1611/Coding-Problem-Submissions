#include <bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) 
//     {
//         unordered_map<int,int> mp;
//         vector<int> ans;
//         for(int i= 0;i < nums.size();i++)
//         {   
//             if(mp.find(target - nums[i]) != mp.end())
//             {
//                 ans.push_back(i);
//                 ans.push_back(mp[target - nums[i]]);
//                 return ans;
//             }
//             mp[nums[i]] = i;
//         }
//         return ans;
//     }
// };

helyyeejkend

class Solution{
    public:
        vector<int> twoSum(vector<int>&nums, int target)
        {
            vector<pair<int, int>> v;
            for(int i = 0 ; i < nums.size(); i++)
                v.push_back(make_pair(nums[i], i));
            sort(v.begin(), v.end());
            vector<int>ans;
            int i = 0, j = nums.size() - 1;
            while(i < j)
            {
                if(v[i].first + v[j].first == target)
                {
                    ans.push_back(v[i].second);
                    ans.push_back(v[j].second);
                    break;
                }
                if(v[i].first + v[j].first > target)
                    j--;
                else
                    i++;
            }
            return ans;
        }
};