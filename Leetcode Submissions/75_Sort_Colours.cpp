class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        for(int i = 0 ; i < nums.size() ;i++)
        {
            for(int j = 0; j < nums.size() - i - 1; j++)
            {
                if(nums[j] > nums[j + 1])
                    swap(nums[j], nums[j + 1]);
            }
        }
        
    }
};

class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int c1 = 0, c2 = 0, c3 = 0;
        
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i] == 0) c1++;
            if(nums[i] == 1) c2++;
            if(nums[i] == 2) c3++;
        }
        for(int i = 0 ; i < nums.size(); i++)
        {
            if(i < c1)
                nums[i] = 0;
            else if(i >= c1 and i < c1 + c2)
                nums[i] = 1;
            else
                nums[i] = 2;
        }
    }
};

