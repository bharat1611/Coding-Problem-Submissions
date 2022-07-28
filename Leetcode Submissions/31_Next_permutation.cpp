class Solution {
public:
    
    void reverse_vector(vector<int>&nums, int start) //Function to reverse the vector
    {
        int i = start, j = nums.size() - 1, temp = 0;
        while(i < j)
        {
            temp = nums[i];
            nums[i] = nums[j];
            nums[j] =temp;
            i++;
            j--;
        }
    }
    void nextPermutation(vector<int>& nums) 
    {
        if(nums.size() == 1)                    //if size is 1 return 
            return;
        
        int index , j= 0;
        for(int i = nums.size() - 2; i >= 0; i--)
        {
            if(nums[i] < nums[i + 1])
            {
                index = i;                      // storing the first element which is less than the one ahead
                break;                          // lets call this the index element
            }
        }
        
        if(index < 0)                   // if there exixts no index element, then returning sorted vector
            sort(nums.begin(), nums.end());
        else{                                   // if index element exixts
            j = 0;
            for(int i = nums.size() - 1; i >= 0; i--)
            {
                if(nums[i] > nums[index])     // finding the element which is just greater than index element
                {
                    j = i;                      // lets call it j element
                    break;
                }
            }
            swap(nums[index], nums[j]);        // swapping index element and the j element
            reverse_vector(nums, index + 1 );  // reversing the vector after the string element
        }   
    }
};


// class Solution {
// public:
    
//     void nextPermutation(vector<int>& nums) 
//     {
//         if(nums.size() == 1)
//             return;
        
//         int index , j= 0;
//         for(int i = nums.size() - 2; i >= 0; i--)
//         {
//             if(nums[i] < nums[i + 1])
//             {
//                 index = i;
//                 break;
//             }
//         }
        
//         if(index < 0)
//             sort(nums.begin(), nums.end());
//         else{
//             j = 0;
//             for(int i = nums.size() - 1; i >= 0; i--)
//             {
//                 if(nums[i] > nums[index])
//                 {
//                     j = i;
//                     break;
//                 }
//             }
//             swap(nums[index], nums[j]);
//             reverse(nums.begin() + index + 1, nums.end());
//         }
//     }
// };