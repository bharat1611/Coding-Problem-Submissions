class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for(int i = 0 ; i < nums.size(); i++)
        {
            int curr = nums[i];
            int count = 0;
            int ind = i;
            while(ind < nums.size() and nums[ind] == curr)
            {
                count++;
                if(count > 2)
                    nums[ind] = INT_MAX;
                ind++;
            }
        }
        sort(nums.begin(), nums.end());
        int k = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == INT_MAX){
                nums.erase(nums.begin() + i, nums.end());
                break;
            }
            else
                k++;
        }
        return k;
    }
};
