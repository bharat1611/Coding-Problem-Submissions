#include <iostream>
using namespace std;


int binary_search(int arr[], int low, int high, int target)
{
    
    while(low <= high)
    {
        int mid = low + (high - low)/2;
        if(arr[mid] == target)
            return mid;
        else if(arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int binary(int arr[], int n, int target)
{
    if(arr[0] == target)
        return 0;
    int i = 1;
    while(i < n && arr[i] <= target)
        i = i * 2;
    
    return binary_search(arr, i/2, min(n - 1, i), target);
}
int main()
{
    int arr[] = {1,2,3,4,6,7,8,10,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 6;
    int res = binary(arr, n, target);
    
    (res == -1) ?cout << "Element not present " << endl : cout << "Element present at index " << res + 1 << endl;

}