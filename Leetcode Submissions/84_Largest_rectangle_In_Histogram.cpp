// class Solution {
// public:
//     int largestRectangleArea(vector<int>& heights) {
//         if(heights.size() == 1)
//             return heights[0];
//         int curr = 0, nexxt = 0, curr_area = 0;
//         int ans = 0;
        
//         for(int i = 0; i < heights.size(); i++)
//         {
//             curr = heights[i];
//             for(int j = i + 1; j < heights.size(); j++)
//             {
//                 nexxt = heights[j];
//                 if(j == heights.size() - 1 or nexxt < curr)
//                 {
//                     curr_area = max(nexxt, curr * (j - i));
//                     break;
//                 }               
//             }
//             ans = max(ans, curr_area);
//         }
//         return ans;
//     }
// };

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        if(heights.size() == 1)
            return heights[0];
        
        int n = heights.size();
        stack<int> st;
        st.push(-1);
        vector<int> smallestRight(n, heights.size()-1);
        vector<int> smallestLeft(n, 0);
        
        for(int i = 0 ; i < n; i++){
            while(st.top() != -1 and heights[st.top()] >= heights[i]){
                st.pop();
            }
            smallestLeft[i] = st.top() == -1 ? -1 : st.top();
            st.push(i);
        }
        
        stack<int> st1;
        st1.push(-1);
        
        for(int i = n - 1; i >= 0; i--)
        {
            while(st1.top() != -1 and heights[st1.top()] >= heights[i])
                st1.pop();
            smallestRight[i] = st1.top() == (-1) ? n : st1.top();
            st1.push(i);
        }
        int area = 0;
        for(int i = 0 ; i < n; i++)
        {
            int l = heights[i];
            int b = smallestRight[i] - smallestLeft[i] - 1;
            area = max(area, l*b);
        }
        return area;
        
    }
};