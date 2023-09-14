#include <stack>
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int> st;
    st.push(-1);

    vector<int> v(n, -1);
    for(int i = n - 1; i >= 0; i--)
    {
        if(st.top() >= arr[i]){
            while(st.top() >= arr[i]){
                st.pop();
            }
        }
        v[i] = st.top();
        st.push(arr[i]);
    }
    return v;
}