#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {     
        unordered_map<int,int> mp;
        int count = 0;
        for(int i = 0 ; i < nums.size(); i++)
            mp[nums[i]]++;
        for(int i = 0 ; i < nums.size(); i++)
        {
            if(mp.find(k + nums[i]) != mp.end())
                count += mp[nums[i]+k];
        }
        return count;
    }
};

// class Solution {
// public:
// int countKDifference(vector<int>& nums, int k) {
//         int count=0;
//         for(int i=0; i<nums.size(); ++i){
//             for(int j=0; j!=i && j<nums.size(); ++j){
//                 if(abs(nums[i]-nums[j])==k)
//                     count++;
//             }
//         }
//         return count;
//     }
// };

