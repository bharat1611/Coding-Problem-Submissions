// { Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


 // } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        vector<pair<int,int>>v;
        for(int i = 0 ; i < n;i++)
        {
            v.push_back({arr[i].profit, arr[i].dead});
        }
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        
        int maxDead = 0;
        for(int i = 0 ; i < v.size();i++)
            if(maxDead < v[i].second)
                maxDead = v[i].second;
                
        int fill[maxDead];
        for(int i = 0 ; i < maxDead; i++)
        {
            fill[i] = -1;
        }
        
        int maxProfit = 0, count = 0;
        for(int i = 0 ; i < n; i++)
        {
            int j = v[i].second - 1;
            while(j >=0 && fill[j] != -1)
                j--;
            
            if(j >= 0 && fill[j] == -1)
            {
                fill[j] = i;
                maxProfit += v[i].first;
                count++;
            }
        }
        return {count, maxProfit};
    } 
};

// { Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}


  // } Driver Code Ends