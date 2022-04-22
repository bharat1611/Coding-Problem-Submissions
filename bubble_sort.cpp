#include <iostream>
using namespace std;


void B_sort(int a[], int n)
{
    int temp,i,j,k,c, comp = 0, shfts = 0;
    for(i = 0; i < n-1; i++)
    {
        c = 0;
        for(j = 0; j < n-1-i; j++)
        {
            ++comp;
            if(a[j] > a[j+1])
            {
                ++shfts;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                c++;
            }
        }
        if(c==0)
        {
            break;
        }
        cout<<"In "<<i+1<<" pass : ";
        for(k = 0; k < n; k++)
        {
            cout<<" "<< a[k];
        }
        cout<<"\n";
    }
    cout<<"Sorted array is : ";
    for(i = 0; i < n; i++)
    {
        cout<<" "<<a[i];
    }
    cout<<endl<<"Comparisons are : "<< comp<<endl<<"Shifts are : "<<shfts<<endl;
}
int main()
{
    int arr[] = {1, 2, 4, 3
    };
    int n = sizeof(arr)/sizeof(arr[0]);
    B_sort(arr, n);
}