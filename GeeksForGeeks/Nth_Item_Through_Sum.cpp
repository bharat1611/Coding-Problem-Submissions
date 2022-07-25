// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
#include <vector>
#include <algorithm>
class Solution{
public:
    int nthItem(int L1, int L2, int A[], int B[], int N)
    {
        set<int>v;
        int i = 0 , j = 0, sum = 0;
        
        for(j = 0 ; j < L2; j++)
        {
            for(i = 0 ; i < L1; i++)
            {
                sum = A[i] + B[j];
                v.insert(sum);
            }
        }
        if(v.size() < N)
            return -1;
        set<int>::iterator it= v.begin();
        for(i = 1; i < N; i++)
            it++;
        return *it;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int L1, L2, N;
        cin>>L1>>L2;
        int A[L1], B[L2];
        for(int i = 0;i < L1;i++)
            cin>>A[i];
        for(int i = 0;i < L2;i++)
            cin>>B[i];
        cin>>N;
        
        Solution ob;
        cout<<ob.nthItem(L1, L2, A, B, N)<<endl;
    }
    return 0;
}  // } Driver Code Ends