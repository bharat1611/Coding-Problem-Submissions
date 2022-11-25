class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int MOD = 1000000007;
        stack<int> st;
        vector<int> dp(arr.size());
        
        for(int i = 0 ; i < arr.size(); i++)
        {
            while(!st.empty() and arr[st.top()] >= arr[i])
                st.pop();
            if(st.size() > 0)
            {
                int prevS = st.top();
                dp[i] = dp[prevS] + (i - prevS)*arr[i];
            }
            else
            {
                dp[i] = (i + 1)*arr[i];
            }
            st.push(i);
        }
        long sum_min = 0;
        for(int i : dp)
        {
            sum_min += i;
            sum_min %= MOD;
        }
        return (int)sum_min;
    }
};