// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n = nums.size();
//         unordered_map<int, int> mp;
//         for(int i = 0 ; i < n; i++)
//         {
//             mp[nums[i]]++;
//             if(mp[nums[i]] > n/2)
//                 return nums[i];
//         }
//         return -1;
//     }
// };

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0, ele = 0;
        for(int i = 0 ; i < n; i++)
        {
            if(cnt == 0){
                ele = nums[i];
                cnt++;
            }
            else if(ele != nums[i])
                cnt--;
            else if(ele == nums[i])
                cnt++;
        }
        return ele;
    }
};