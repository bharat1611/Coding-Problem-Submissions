class Solution {
public:
    int maxDistance(vector<int>& colors) {
        
        int ans = 0;
        for(int i = 0 ; i < colors.size(); i++)
        {
            for(int j = i + 1; j < colors.size(); j++)
            {
                if(colors[i] != colors[j])
                {
                    ans = max(ans, j - i);
                }
            }
        }
        return ans;
    }
};

class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int left = 0, right = n - 1;
        while(colors[left] == colors[n - 1])
            left++;
        while(colors[right] == colors[0])
            right--;
        return max(right, n - 1 - left);
            
    }
};