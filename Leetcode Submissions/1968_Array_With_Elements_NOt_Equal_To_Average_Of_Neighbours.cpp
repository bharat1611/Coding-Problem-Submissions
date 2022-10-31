class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> v(nums.begin(), nums.end());
        sort(v.begin(), v.end());
        
        int n = nums.size();
        int start = 0;
        for(int i = 0 ; i < n; i += 2)
        {
            nums[i] = v[start];
            start++;
        }
        for(int i = 1; i < n; i += 2){
            nums[i] = v[start];
            start++;
        }
        return nums;
    }
};