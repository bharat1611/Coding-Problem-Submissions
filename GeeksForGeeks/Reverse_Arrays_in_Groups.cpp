//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        
        int i = 0;
        int start = 0, end = 0;
        int last_ind = 0;
        while(i < n)
        {
            if(((i + 1)%k) == 0)
            {
                start = i - k + 1, end = i;
                last_ind = end + 1;
                while(start <= end)
                {
                    swap(arr[start], arr[end]);
                    start++;
                    end--;
                }
            }
            i++;
        }
        start = last_ind;
        end = n - 1;
        while(start <= end)
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
    return 0;
}


// } Driver Code Ends