class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        vector<int> array;
        array.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                array.push_back(nums[i]);
            }
        }
        if(array.size()<3)
            return array[0];
        else
            return array[2];
    }
};