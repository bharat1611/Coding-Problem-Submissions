#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) 
    {
        vector<vector<int>> sol;            // 2D vector for storing the elements
        sort(arr.begin(), arr.end());       // sorting the array
        int min = INT_MAX;
        for(int i = 1; i < arr.size(); i++)     // Finding the min difference in the array
        {
            if(arr[i] - arr[i - 1] < min)
                min = arr[i] - arr[i - 1];          // store the min difference in min
        }
        for(int i = 1; i < arr.size() ; i++)
        {
            if(arr[i] - arr[i - 1] == min)          // if pair's diffference is equal to min
            {
                sol.push_back({arr[i - 1], arr[i]});       // push back the pair having minimum difference
            }
        }
        return sol;             // return solution
    }
};