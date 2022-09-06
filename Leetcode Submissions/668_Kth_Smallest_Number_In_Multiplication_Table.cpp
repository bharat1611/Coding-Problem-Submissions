class Solution {
public:
    int findKthNumber(int m, int n, int k) {
        int left = 0, right = m*n;
        int search_val = 0, min_e = 0;
        while(left < right)
        {
            int mid = (right + left)/2;
            for(int i = 1; i <= m; i++)
            {
                min_e = min(mid/i, n);
                search_val += min_e;
            }
            if(search_val < k)
                left = mid + 1;
            else if(search_val >= k)
                right = mid;
            search_val = 0;
        }
        return left;
    }
};