#include <iostream>
using namespace std;

int binary_Search(int arr[], int lb, int ub, int key)
{
    int mid = 0;
    while(lb <= ub)
    {
        mid = lb +(ub - lb)/2;
        if(arr[mid] == key)
            return mid;
        else if(arr[mid] < key)
            lb = mid + 1;
        else
            ub = mid - 1;
    }
    return -1;
}

int exponential_Search(int arr[], int n, int key)
{
    if(arr[0] == key)
        return 0;

    int i = 1;
    while(i < n && arr[i] <= key)
        i = i * 2;

    return binary_Search(arr , i/2 , min(i, n-1), key);
}

int main()
{
    int arr[] = {12, 23, 26, 39, 41};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;
    cin>>key;
    int pos = exponential_Search(arr, n, key);
    if(pos == -1)
        cout<<"Element not present"<<endl;
    else
        cout << "Element present at index : "<<pos<<endl;
}