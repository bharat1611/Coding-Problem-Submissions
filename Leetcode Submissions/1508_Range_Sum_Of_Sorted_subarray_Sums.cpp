class Solution {
public:
    vector<int> v;
    void solve(vector<int>&nums, int i,  int n, int sum)
    {
        if(i >= n)
            return;
        sum += nums[i];
        v.push_back(sum);
        solve(nums, i + 1, n,sum);
    }
    
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        int MOD = 1000000007;
        // vector<vector<int>> dp(n, vector<int> (1e9, -1));
        for(int i = 0 ; i < n; i++){
            solve(nums, i,n,0);
        }
        sort(v.begin(), v.end());
        int ans = 0;
        for(int i = left -1; i < right; i++)
        {
            ans += v[i];
            ans = ans % MOD;
        }
        return ans;
        
    }
};