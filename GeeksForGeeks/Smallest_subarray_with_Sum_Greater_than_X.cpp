//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        int min_l = INT_MAX;
        long long sum = 0;
        int low = 0, i = 0;
        int curr_len = 0;
        while(i < n)
        {
            sum += arr[i];
            while(sum > x)
            {
                min_l = min(min_l, i - low + 1);
                sum = sum - arr[low];
                low++;
            }
            i++;
        }
        if(min_l == INT_MAX)
            return 0;
        
        return min_l;
        
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}
// } Driver Code Ends