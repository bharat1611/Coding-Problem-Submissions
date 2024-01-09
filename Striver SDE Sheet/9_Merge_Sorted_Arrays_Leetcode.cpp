// Solution 1 
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans;
        int i = 0, j = 0;
        while(i < m and j < n)
        {
            if(nums1[i] <= nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }
            else{
                ans.push_back(nums2[j]);
                j++;
            }
        }
        while(i < m){
            ans.push_back(nums1[i++]);
        }
        while(j < n){
            ans.push_back(nums2[j++]);
        }
        for(int i = 0; i < ans.size();i++){
            nums1[i] = ans[i];
        }
    }
};

// Solution 2
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i = m; i < m + n; i++){
            nums1[i] = nums2[i - m];
        }
        sort(nums1.begin(), nums1.end());
    }
};

// Solution 3
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;
        while(i >= 0 and j >= 0){
            if(nums1[i] > nums2[j]){
                nums1[k] = nums1[i];
                i--, k--;
            }
            else{
                nums1[k] = nums2[j];
                j--, k--;
            }
        }
        while(j >= 0){
            nums1[k] = nums2[j];
            k--, j--;
        }
    }
};