#include <iostream>
using namespace std;

int comp = 0;
void merge(int arr[], int low, int mid, int high)
{
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int left[n1], right[n2];

    for(int i = 0; i < n1; i++)
        left[i] = arr[low + i];
    for(int j = 0; j < n2; j++)
        right[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = low;

    while(i < n1 && j < n2)
    {
        if(left[i] < right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
        }
        k++;
        comp++;
    }

    while(i < n1)
    {
        arr[k] = left[i];
        i++;
        k++;
        
    }
    while(j < n2)
    {
        arr[k] = right[j];
        j++;
        k++;
        
    }
    
}

void mergeSort(int arr[], int low, int high)
{
    if(low >= high)
        return;

    int mid = low + (high - low)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main()
{
    int arr[] = {23,65,21,76,46,89,45,32};
    int n = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr, 0, n - 1);

    for(int i = 0 ; i< n; i++)
    {
        cout<<arr[i]<<" " ;
    }
    cout<<endl<<"Comparisons : " <<comp;
}