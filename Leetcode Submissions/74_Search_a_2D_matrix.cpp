#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int found = 0, index = -2;
		
		for(int i = 0; i < matrix.size()-1 ; i++)                  //Check if target is in 0 to n-1 rows
        {
            if(matrix[i][0] <= target && target < matrix[i+1][0])
            {
                found = 1;
				index = i;                        //Extract the index of the row where element can be found
            }
        }
        if(found == 0)                       //If target not found in first n-1 rows, then assign last row to index
            index = matrix.size() - 1;
        
        if(index != -2)                    //If index has updated means element was found
        {
            for(int i = 0; i<matrix[index].size(); i++)
            {
                if(matrix[index][i] == target)
                    return true;
            }
        }
        else                              // If index wasnt updated, element not found, return false.
            return false;
        
        return false;
    }
};

// O ms Solution :

// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int n=matrix.size(),m=matrix[0].size();
//         int i=0,j=m-1;
//         while(i>=0 and i<n and j>=0 and j<m){
//             if(matrix[i][j]==target){
//                 return true;
//             }
//             else{
//                 if(matrix[i][j]>target){
//                     j--;
//                 }
//                 else{
//                     i++;
//                 }
//             }
//         }
//         return false;
//     }
// };