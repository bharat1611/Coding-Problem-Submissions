#include <iostream>
#include <bits.h>
using namespace std;

int main()
{
    int n = 0, i = 0;
    int bit[10];
    cin>>n;
    int num = n;

// while(n != 0)????
//     {
//         bit[i] = n&1;
//         n = n >> 1;
//         i++;
//     }
//     for(int j : bit)
//     {
//         cout<<bit[j];
//     } ?????

//Even ODD
    if(num&1 == 1)
        cout<<"ODD"<<endl;
    else
        cout<<"EVEN"<<endl;
    
    while(n != 0)
    {
        cout <<(n&1);
        n = n >> 1;
    }
}