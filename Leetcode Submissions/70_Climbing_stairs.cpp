#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        int arr[47] = {0};
        arr[0] = 0;
        arr[1] = 1;
        for(int i = 2; i <= n +1; i++)
        {
            arr[i] = arr[i-1] + arr[i -2];
        }
        return arr[n+1];
    }
};