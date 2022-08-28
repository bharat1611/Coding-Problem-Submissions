class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        
        int left = 1, right = *max_element(nums.begin(), nums.end());
        int sum;
        while(left < right)
        {
            int mid = left + (right - left)/2;
            sum = 0;
            for(int i : nums)
            {
                sum += ceil((double)i/mid);
            }
        
            if(sum > threshold)
                left = mid + 1;
            else
                right = mid;
        }
        return left;
        
    }
};