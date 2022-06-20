// // C++ implementation of the approach
// #include <bits/stdc++.h>
// using namespace std;
 
// // Function to return the maximum sub-array sum
// int maxSubArraySum(int a[], int size)
// {
 
//     // Initialized
//     int max_so_far = INT_MIN, max_ending_here = 0;
 
//     // Traverse in the array
//     for (int i = 0; i < size; i++) {
 
//         // Increase the sum
//         max_ending_here = max_ending_here + a[i];
 
//         // If sub-array sum is more than the previous
//         if (max_so_far < max_ending_here)
//             max_so_far = max_ending_here;
 
//         // If sum is negative
//         if (max_ending_here < 0)
//             max_ending_here = 0;
//     }
//     return max_so_far;
// }
 
// // Function that returns the maximum sub-array sum
// // after removing an element from the same sub-array
// int maximizeSum(int a[], int n)
// {
//     int cnt = 0;
//     int mini = INT_MAX;
//     int minSubarray = INT_MAX;
 
//     // Maximum sub-array sum using Kadane's Algorithm
//     int sum = maxSubArraySum(a, n);
 
//     int max_so_far = INT_MIN, max_ending_here = 0;
 
//     // Re-apply Kadane's with minor changes
//     for (int i = 0; i < n; i++) {
 
//         // Increase the sum
//         max_ending_here = max_ending_here + a[i];
//         cnt++;
//         minSubarray = min(a[i], minSubarray);
 
//         // If sub-array sum is greater than the previous
//         if (sum == max_ending_here) {
 
//             // If elements are 0, no removal
//             if (cnt == 1)
//                 mini = min(mini, 0);
 
//             // If elements are more, then store
//             // the minimum value in the sub-array
//             // obtained till now
//             else
//                 mini = min(mini, minSubarray);
//         }
 
//         // If sum is negative
//         if (max_ending_here < 0) {
 
//             // Re-initialize everything
//             max_ending_here = 0;
//             cnt = 0;
//             minSubarray = INT_MAX;
//         }
//     }
 
//     return sum - mini;
// }
 
// // Driver code
// int main()
// {
//     int a[] = {-1,4,-1,2};
//     int n = sizeof(a) / sizeof(a[0]);
//     cout << maximizeSum(a, n);
 
//     return 0;
// }



// // C++ program to get maximum sum subarray removing
// // at-most one element
// #include <bits/stdc++.h>
// using namespace std;
 
// // Method returns maximum sum of all subarray where
// // removing one element is also allowed
// int maxSumSubarrayRemovingOneEle(int arr[], int n)
// {
//     // Maximum sum subarrays in forward and backward
//     // directions
//     int fw[n], bw[n];
 
//     // Initialize current max and max so far.
//     int cur_max = arr[0], max_so_far = arr[0];
 
//     // calculating maximum sum subarrays in forward
//     // direction
//     fw[0] = arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         cur_max = max(arr[i], cur_max + arr[i]);
//         max_so_far = max(max_so_far, cur_max);
 
//         // storing current maximum till ith, in
//         // forward array
//         fw[i] = cur_max;
//     }
 
//     // calculating maximum sum subarrays in backward
//     // direction
//     cur_max = max_so_far = bw[n-1] = arr[n-1];
//     for (int i = n-2; i >= 0; i--)
//     {
//         cur_max = max(arr[i], cur_max + arr[i]);
//         max_so_far = max(max_so_far, cur_max);
 
//         // storing current maximum from ith, in
//         // backward array
//         bw[i] = cur_max;
//     }
 
//     /* Initializing final ans by max_so_far so that,
//         case when no element is removed to get max sum
//         subarray is also handled */
//     int fans = max_so_far;
 
//     // choosing maximum ignoring ith element
//     for (int i = 1; i < n - 1; i++)
//         fans = max(fans,max(0, fw[i - 1]) +max(0, bw[i + 1]));
//   // In this condition we are checking when removing the ith element
//   //so checking the max(0,left)+max(0,right), because maybe left<0 || right<0 so it wont contribute to the answer
//         if(fans==0){
//           // if no positive element in array so return max_element
//             return *max_element(arr,arr+n);
//         }
//     return fans;
 
// }
 
// // Driver code to test above methods
// int main()
// {
//     int arr[] = {-1,4,-1,2};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << maxSumSubarrayRemovingOneEle(arr, n);
//     return 0;
// }


// C++ program to find the
// nth catalan number
#include <bits/stdc++.h>
using namespace std;
 
// Returns value of Binomial Coefficient C(n, k)
unsigned long int binomialCoeff(unsigned int n,
                                unsigned int k)
{
    unsigned long int res = 1;
 
    // Since C(n, k) = C(n, n-k)
    if (k > n - k)
        k = n - k;
 
    // Calculate value of
    // [n*(n-1)*---*(n-k+1)] / [k*(k-1)*---*1]
    for (int i = 0; i < k; ++i) {
        res *= (n - i);
        res /= (i + 1);
    }
 
    return res;
}
 
// A Binomial coefficient based function
// to find nth catalan
// number in O(n) time
unsigned long int catalan(unsigned int n)
{
    // Calculate value of 2nCn
    unsigned long int c = binomialCoeff(2 * n, n);
 
    // return 2nCn/(n+1)
    return c / (n + 1);
}
 
// Driver code
int main()
{
    int n = 5;
 
    cout << catalan(n) << endl;
 
    return 0;
}