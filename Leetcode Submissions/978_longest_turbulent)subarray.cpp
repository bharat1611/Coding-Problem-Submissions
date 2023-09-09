class Solution {
public:

    int maxTurbulenceSize(vector<int>& arr) {
        
        int n = arr.size();
        int l = 0, r = 1;
        char prev = ' ';
        int ans = 1;
        while(r < n)
        {
            if(arr[r] < arr[r - 1] and prev != '<')
            {
                ans = max(ans, r - l + 1);
                r += 1;
                prev = '<';
            }
            else if(arr[r] > arr[r - 1] and prev != '>')
            {
                ans = max(ans, r - l + 1);
                r += 1;
                prev = '>';
            }
            else
            {
                if(arr[r] == arr[r - 1])
                    r = r + 1;
                l = r - 1;
                prev = ' ';               
            }            
        }
        return ans;
    }
};