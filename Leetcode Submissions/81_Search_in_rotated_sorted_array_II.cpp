#include <bits/stdc++.h>
using namespace std;

// O(n) SOLUTION : 
// Brute Force Approach

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        
        for(int i = 0 ; i<nums.size(); i++)
        {
            if(nums[i]==target)
                return true;
        }
        return false;
    }
};


// O(log N) solution : 

// class Solution {
// public:
//     bool search(vector<int>& nums, int target) 
//     {
//         int l=0, r=nums.size()-1;
        
//         while(l<=r)
//         {
//             int mid = (l+r)/2;
            
//             //return true if middle value is equal to the target
//             if(nums[mid] == target) return true;
            
//             //to handle duplicates we move start and end pointers by 1 towards middle.
//             if(nums[mid] == nums[l] && nums[mid] == nums[r])
//             {
//                 l++;
//                 r--;
//             }
            
//             //if first half is sorted
//             else if(nums[l] <= nums[mid])
//             {
//                 //whem target lies in first half
//                 if(nums[l] <= target && target < nums[mid])
//                     r = mid-1;
                
//                 //when target lies in second half
//                 else
//                     l = mid+1;
//             }
            
//             //if second half is sorted
//             else
//             {
//                 //when target lies in second half
//                 if(nums[mid] < target && target <= nums[r])
//                     l = mid+1;
                
//                 //when target lies in first half
//                 else
//                     r = mid-1;
//             }
//         }
        
//         //if target not found in nums return false
//         return false;
//     }
// };