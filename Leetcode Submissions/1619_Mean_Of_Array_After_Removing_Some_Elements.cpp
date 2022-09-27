class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int newSize = 0;
        double sum = 0;
        for(int i = n / 20; i < n - (n/20);i++)
        {
            sum += arr[i];
            newSize++;
        }
        return sum/(1.0*newSize);  
    }
};