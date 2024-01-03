class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        vector<int> store;
        int ind = -1;
        
        for(int i = nums.size() - 2; i >= 0; i--){
            if(nums[i] < nums[i + 1]){
                ind = i;
                break;
            }              
        }
        if(ind == -1){
            reverse(nums.begin(), nums.end());
            return;
        }
        
        for(int i = ind + 1; i < nums.size(); i++)
        {
            for(int j = ind + 1; j < nums.size() -1; j++){
                if(nums[j] > nums[j + 1])
                    swap(nums[j], nums[j + 1]);
            }
        }
        
        for(int i = ind + 1; i < nums.size(); i++)
        {
            if(nums[i] > nums[ind]){
                swap(nums[i], nums[ind]);
                break;
            }
        }
        return;
    }
};