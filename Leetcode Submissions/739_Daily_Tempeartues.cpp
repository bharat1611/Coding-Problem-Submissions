class Solution {
public:
    stack<pair<int, int>> st;
    int index = -1;
    int current(int num)
    {
        index += 1;
        while(!st.empty() and st.top().second <= num)
        {
            st.pop();
        }
        if(st.empty())
        {
            st.push({index, num});
            return 0;
        }
        int curr = st.top().first;
        st.push({index, num});
        return index - curr;   
    }
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans;
        for(int i = temperatures.size() - 1; i >= 0; i--)
        {
            int ele = current(temperatures[i]);
            ans.push_back(ele);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};