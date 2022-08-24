class Solution {
public:
    bool checkPowersOfThree(int n) 
    {
        stack<int> st;
        int i = 1;
        while(i <= n)
        {
            st.push(i);
            i = 3 * i;
        }
        int sum = 0;
        while(st.size())
        {
            if(sum + st.top() <= n)
                sum += st.top();
            
            st.pop();
        }
        return sum == n;
    }
};