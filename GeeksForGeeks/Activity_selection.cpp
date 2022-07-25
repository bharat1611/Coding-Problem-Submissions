// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        vector<pair<int, int>> v;
        for(int i = 0 ;i < start.size(); i++)
        {
            v.push_back({end[i], start[i]});
        }
        
        sort(v.begin(), v.end());
        int max_so_far = 0;
        int count = 0;
        for(int i = 0 ; i < v.size() ; i++)
        {
            if(v[i].second > max_so_far){
                count++;
                max_so_far = v[i].first;
                
            }
        }
        return count;
        
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    
    //testcases
    cin >> t;
    while(t--)
    {
        //size of array
        int n;
        cin >> n;
        vector<int> start(n), end(n);
        
        //adding elements to arrays start and end
        for(int i=0;i<n;i++)
            cin>>start[i];
        for(int i=0;i<n;i++)
            cin>>end[i];
        Solution ob;
        //function call
        cout << ob.activitySelection(start, end, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends