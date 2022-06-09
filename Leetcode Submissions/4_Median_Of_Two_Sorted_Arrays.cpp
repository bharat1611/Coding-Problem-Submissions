class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int f = nums1.size() + nums2.size();
        vector<int> v(f);
        int i = 0, j = 0, k = 0;
        while(i < n && j < m)
        {
            if(nums1[i] <= nums2[j])
            {
                v[k] = nums1[i];
                i++;
            }
            else if(nums1[i] > nums2[j])
            {
                v[k] = nums2[j];
                j++;
            }
            k++;
        }
        while(i < n)
        {
            v[k] = nums1[i];
            k++;
            i++;
        }
        while(j < m)
        {
            v[k] = nums2[j];
            k++;
            j++;
        }
        if(f % 2 == 0)
            return (v[f/2] + v[f/2 - 1])/2.0;
        
        return double(v[f/2]); 
    }
};