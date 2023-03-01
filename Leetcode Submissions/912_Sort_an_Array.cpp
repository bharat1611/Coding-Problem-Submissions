class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        return nums;
        
    }
};

class Solution {
public:
    void mergeS(vector<int> &nums, int low, int mid, int high)
    {
        int n1 = mid - low + 1;
        int n2 = high - mid;
        int left[n1], right[n2];
        
        for(int i = 0 ; i < n1; i++)
        {
            left[i] = nums[low+ i];
        }
        for(int j = 0 ; j < n2; j++)
        {
            right[j] = nums[mid + 1 + j];
        }
        int i = 0 , j = 0, k = low;
        
        while(i < n1 and j < n2)
        {
            if(left[i] <= right[j])
            {
                nums[k] = left[i];
                i++;
            }
            else if(left[i] > right[j])
            {
                nums[k] = right[j];
                j++;
            }
            k++;
        }
        while(i < n1)
        {
            nums[k] = left[i];
            i++;k++;
        }
        while(j < n2)
        {
            nums[k] = right[j];
            j++;k++;
        }
    }
    void mergeSort(vector<int> &nums, int low, int high)
    {
        if(low >= high)
            return;
        
        int mid = low + (high - low)/2;
        mergeSort(nums, low, mid);
        mergeSort(nums, mid + 1, high);
        mergeS(nums, low, mid, high);
    }
    
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;   
    }
};