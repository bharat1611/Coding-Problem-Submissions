class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        
        stack<pair<int, int>> st;
        for(int j = 0; j < 2; j++){
            for(int i = n - 1; i >=0 ; i--)
            {
                while(!st.empty() and st.top().second <= nums[i]){
                    st.pop();
                }
                if(st.empty()){
                    ans[i] = -1;
                }
                else{
                    if(st.top().first != i){
                        ans[i] = st.top().second;
                    }
                }
                st.push({i, nums[i]});
            }
        }
        return ans;
    }
};