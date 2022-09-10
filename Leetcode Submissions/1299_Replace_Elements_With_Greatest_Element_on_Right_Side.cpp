class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> v(n, -1);
        int max_so_far = arr[n - 1];
        v[n - 1] = -1;
        for(int i = arr.size() - 2; i >= 0; i--)
        {
            v[i] = max_so_far;
            max_so_far = max(arr[i], max_so_far);
        }
        return v;
    }
};