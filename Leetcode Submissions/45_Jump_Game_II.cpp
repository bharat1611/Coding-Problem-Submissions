// class Solution {
// public:
//     int jump(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> v(n, INT_MAX);
//         v[n - 1] = 0;
        
//         for(int i = n - 2; i >= 0; i--)
//         {
//             int j = i + 1;
//             int ind = min(n - 1, i + nums[i]);
//             int min_all = INT_MAX;
//             while(j <= ind)
//             {
//                 min_all = min(min_all, v[j]);
//                 j++;
//             }
//             if(min_all != INT_MAX)
//                 v[i] = min_all + 1;
//         }
//         return v[0];
//     }
// };

class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp (n,INT_MAX);
        dp[0] = 0;
        
        for(int i = 0; i < n; i++)
        {
            int step = nums[i];
            for(int j = 1; j <= step and i + j <n; j++)
            {
                dp[i + j] = min(dp[i + j], dp[i] + 1);
            }
        }
        return dp[n - 1];
    }
};