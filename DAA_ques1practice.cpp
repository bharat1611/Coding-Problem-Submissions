#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 90, 100, 40, 50, 60, 20, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    int high[] = {0, 0, 0};
    while(i < n)
    {
         if(arr[i] > high[0] && arr[i] < high[1])
            high[0] = arr[i];
        else if(arr[i] > high[1] && arr[i] < high[2])
            high[1] = arr[i];
        else if(arr[i] > high[2] && arr[i] < high[0])
            high[2] = arr[i];

        i++;
    }
    for(int j = 0; j < 3; j++)
    {
        cout<<high[j] << "  ";
    }
}