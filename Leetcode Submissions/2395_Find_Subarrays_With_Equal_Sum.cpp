class Solution {
public:
    bool findSubarrays(vector<int>& nums) 
    {
       unordered_map<int, int> mp;
       int i = 0;

       while(i < nums.size())
       {
          if(i + 1 >= nums.size())
              break;
           
          int sum = nums[i] + nums[i + 1];

          if(mp.find(sum) != mp.end())
               return true;
           
          i = i + 1;
          mp[sum]++;
       }
       return false;     
    }
};
