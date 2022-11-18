class Solution {
public:
    vector<int> addNegabinary(vector<int>& arr1, vector<int>& arr2) {
        int i = arr1.size() - 1, j = arr2.size() - 1;
        int carry = 0;
        vector<int> v;
        while(i >= 0 || j >= 0 || carry)
        {
            if(i >= 0)
            {
                carry += arr1[i];
                i--;
            }
            if(j >= 0){
                carry += arr2[j];
                j--;
            }
            v.push_back(carry&1);
            carry = -(carry >> 1);
        }
        while(v.size() > 1 and v.back() == 0)
        {
            v.pop_back();class Solution {
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

        }
        reverse(v.begin(), v.end());
        return v;
    }
};