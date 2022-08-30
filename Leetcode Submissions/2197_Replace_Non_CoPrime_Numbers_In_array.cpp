
// class Solution {
// public:
//     vector<int> replaceNonCoprimes(vector<int>& nums) {
        
//         for(int i = 0 ;i < nums.size() - 1 ; i++)
//         {
//             while(i < nums.size() - 1 and __gcd(nums[i], nums[i + 1]) > 1)
//             {
//                 int lcm = std::lcm(nums[i], nums[i + 1]);
//                 nums.erase(nums.begin() + i);
//                 nums.erase(nums.begin() + i);
//                 nums.insert(nums.begin() + i, lcm);
//                 i--;
//             }
//         }
//         return nums;
//     }
// };


class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        
        vector<int> ans;
        for(int i = 0 ;i < nums.size() ; i++)
        {
            while(!ans.empty() and __gcd(ans.back(), nums[i]) > 1)
            {
                nums[i] = lcm(ans.back(), nums[i]);
                ans.pop_back();
            }
            ans.push_back(nums[i]);
        }
        return ans;
    }
};