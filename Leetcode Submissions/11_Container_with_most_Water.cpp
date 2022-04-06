// This is a two pointer approach to solve the problem.
// We start with left and right and calculate the area between them and store it in water.
// Now to maximize the area, we will move the pointer that is smaller among the two (Obviously, if you have 10*1, to maximize the area you will try to change 1, not 10)
// We will again calculate the area, and see if new area calculated is larger than the previous one, if yes, we will assgign the larger area to water, and continue the process.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int l = 0, r = height.size() - 1, water = 0, max = 0;      
        while(l < r)
        {
            max = min(height[l], height[r]) * (r - l);          //calculating the area in every iteration
            if(max >= water)                // for first iteration, max > water, so water will have value of max
                water = max;                // in other iterations, we will only compare.
            if(height[l] < height[r])       // checking which pointer is smaller, and moving it respectively
                l++;
            else
                r--;
        }
        return water;                          // return water in the end. 
    }
};