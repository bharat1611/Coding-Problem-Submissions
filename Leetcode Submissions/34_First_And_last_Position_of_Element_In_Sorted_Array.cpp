class Solution {
public:
    int binary_search(vector<int>&nums, int lb, int ub, int target)
    {
        int mid = 0;
        while(lb <= ub)
        {
            mid = lb + (ub - lb)/2;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] < target)
                lb = mid + 1;
            else 
                ub = mid - 1;
        }
        return -1;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int n = binary_search(nums, 0, nums.size() - 1, target);
        if(n == -1)
            return {-1, -1};
        
        int m = n;
        for(int i = n + 1; i < nums.size(); i++)
        {
            if(nums[i] == target)
                m++;
            else break;
        }
        for(int i = n - 1; i >= 0; i--)
        {
            if(nums[i] == target)
                n--;
            else break;
        }
        return {n , m};
        
    }
};