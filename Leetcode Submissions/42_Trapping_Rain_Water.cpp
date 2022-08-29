
class Solution {
public:
    int trap(vector<int>& height) 
    {
        int n = height.size(), ans = 0;
        vector<int> left(n);
        
        left[0] = height[0];
        for(int i = 1; i < size; i++)
            left[i] = max(left[i-1], height[i]);
        
        vector<int> right(n);
        right[size - 1] = height[n - 1];
        
        for(int i = n-2; i >= 0; i--)
            right[i] = max(right[i+1], height[i]);
        
        for(int i = 1; i < size - 1; i++)
            ans += min(left[i], right[i]) - height[i]; 
        
        return ans;
    }
};
