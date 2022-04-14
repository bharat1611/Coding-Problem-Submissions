#include <iostream>
using namespace std;

int main()
{
    int arr[]={1,23,4,5,3};
    int *p=arr;
    cout<<p<<endl;
    int f=*(&arr+1)-arr;
    cout<<f<<endl;
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++)
    {
        cout<<&arr[i]<<"  ";
    }
    cout<<endl<<n<<endl;
}
