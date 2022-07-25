// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        if(n == 1)
            return 0;
        if(arr[0] == 0)
            return -1;
        
        int curr = 0, max_reach = 0, jump = 0;
        for(int i = 0 ; i < n - 1; i++)
        {
            max_reach = max(max_reach, arr[i] + i);
            if(curr == i)
            {
                curr = max_reach;
                jump++;
            }
            
        }
        if(max_reach < n - 1)
            return -1;
        else
            return jump;
        
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends