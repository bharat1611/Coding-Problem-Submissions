//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&nums, int n)
    {   
        int diff = 0, ans = 0;
        unordered_map<int, int> mp;
        int sum = 0;
        for(int i = 0 ; i < n; i++){
            sum += nums[i];
            if(sum == 0) {
            ans = i + 1; 
        }
        else{
            if(mp.find(sum) != mp.end()){
                diff = i - mp[sum];
                ans = max(diff, ans);
            }
            else
            {
                mp[sum] = i;
            }
        }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends