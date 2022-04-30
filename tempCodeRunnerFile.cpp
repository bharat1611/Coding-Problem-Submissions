          
#include <iostream>
using namespace std;

void Merge(int arr[], int low, int mid, int high)
{
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int left[n1], right[n2];

    for(auto i : left)
        left[i] = arr[low + i];
    for(auto j : right)
        right[j] = arr[mid + j + 1];

    int i = 0, j = 0, k = low;
    while(i < n1 && j < n2)
    {
        if(left[i] <= right[j])
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
    }
   while( i < n1)
   {
       arr[k] = left[i];
       k++;
       i++;
   }
   while(j < n2)
   {
       arr[k] = right[j];
       k++;
       j++;
   }
}
void MergeSort(int arr[], int low, int high)
{
    if(low >= high)
        return;
    int mid = low + (high - low)/2;

    MergeSort(arr, low, mid);
    MergeSort(arr, mid + 1, high);
    Merge(arr, low, mid, high);

}
int main()
{
    int arr[] = {1,4,5,2,8,5,4,6,3};
    int n = sizeof(arr) / sizeof(arr[0]);

    MergeSort(arr, 0 , n - 1);
    
    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " " ;
    }
}

            