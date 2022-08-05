#include <iostream>
using namespace std;


int binarySearch(int arr[], int low, int high, int target)
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
int main()
{
    int arr[] = {1,4,6,7,8,10,14,16,20};
    int target = 4;
    int n = sizeof(arr)/sizeof(arr[0]);
    if(binarySearch(arr, 0, n - 1, target) != -1)
        cout << "Element is present" << endl;
    else 
        cout << "Element not present" << endl;
}