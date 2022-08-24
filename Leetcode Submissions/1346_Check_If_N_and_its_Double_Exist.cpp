#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        set<int> st;
        int zeroes = 0;
        for(int i = 0 ; i < arr.size(); i++)
        {
            if(arr[i] == 0)
                zeroes++;
            st.insert(arr[i]);
        }
        
        if(zeroes > 1)
            return true;
        
        for(int i = 0 ; i < arr.size(); i++)
        {
            if(st.find(arr[i] * 2) != st.end() && arr[i] != 0){
                cout << arr[i];
                return true;
            }
        }
        return false;
    } 
};