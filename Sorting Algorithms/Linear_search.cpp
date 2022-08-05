#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 5, 6, 4, 2, 6, 7, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 5, flag = 0, index = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            flag = 1;
            index = i + 1;
        }
    }
    if (flag)
        cout << "Target " << target << " is present at index " << index << endl;
    else
        cout << "Target " << target << " not present" << endl;
}