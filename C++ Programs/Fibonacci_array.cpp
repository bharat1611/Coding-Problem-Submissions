#include <iostream>
using namespace std;

class Fibonacci
{
    public:
    void fib(int n, int arr[])
    {
        arr[0]=0;
        arr[1]=1;
        for(int i=2; i<=n; i++)
        {
            arr[i] = arr[i-1] + arr[i-2];
        }
    }
};

int main()
{
    int n=0;
    cout<<"Enter the number of terms : ";
    cin>>n;
    int arr[n]={0};
    Fibonacci obj;
    obj.fib(n , arr);
    for(int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
}