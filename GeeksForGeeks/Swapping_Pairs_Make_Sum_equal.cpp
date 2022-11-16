//{ Driver Code Starts
#include <bits/stdc++.h
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int findSwapValues(int A[], int n, int B[], int m)
	{
        long long int sum_a = 0, sum_b = 0;
        sort(A, A + n);
        sort(B, B + m);
        
        for(int i = 0 ; i < n; i++)
            sum_a += A[i];
        for(int i = 0 ; i < m; i++)
            sum_b += B[i];
        if(((sum_a + sum_b )% 2) != 0)
            return -1;
        if(sum_a == sum_b)
            return 1;
        int target = (sum_a - sum_b)/2;
        if(target == -1)
            return -1;
        else if(target == 0)
            return 1;
            
        int i = 0, j = 0;
        while(i < n and j < m)
        {

            if(A[i] - B[j] == target)
                return 1;
            else if(A[i] - B[j] < target)
                i++;
            else if(A[i] -B[j] > target)
                j++;

        }
        return -1;
	}
 

};

//{ Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n,m;
        cin>>n>>m;
        int a[n];
        int b[m];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
        

        Solution ob;
        cout <<  ob.findSwapValues(a, n, b, m);
	    cout << "\n";
	     
    }
    return 0;
}






// } Driver Code Ends