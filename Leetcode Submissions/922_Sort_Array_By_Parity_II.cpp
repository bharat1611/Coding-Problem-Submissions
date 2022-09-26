class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        
        vector<int> odd, even;
        for(int i = 0 ; i < nums.size(); i++)
        {
            if((nums[i]&1) == 1)
                odd.push_back(nums[i]);
            else
                even.push_back(nums[i]);
        }
        int e = 0, o = 0;
        for(int i = 0 ; i < nums.size(); i++)
        {
            if((i & 1) == 0){
                nums[i] = even[e];
                e++;
            }
            else
            {
                nums[i] = odd[o];
                o++;
            }
        }
        return nums;
    }
};

class Solution
{
public:
    vector<int> sortArrayByParityII(vector<int> &nums)
    {
        int i = 0, j = 1, n = nums.size();
        while (i < n && j < n)
        {
            if (nums[i] % 2 == 0)
                i += 2;
            else if (nums[j] % 2 != 0)
                j += 2;
            else
            {
                swap(nums[i], nums[j]);
                i += 2;
                j += 2;
            }
        }
        return nums;
    }