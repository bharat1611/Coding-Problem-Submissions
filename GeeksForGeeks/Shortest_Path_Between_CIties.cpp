// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int shortestPath( int x, int y){ 
        if(x == y) 
            return 0;
            
        int count = 0;
        while(1)
        {
            if(x < y)
            {
                y = y/2;
                count++;
            }
            if(y < x)
            {
                x = x/2;
                count++;
            }
            if(x == y)
                break;
        }
        return count;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        Solution ob;
        cout<< ob.shortestPath(x,y) << endl;
    }
    return 0; 
}   // } Driver Code Ends