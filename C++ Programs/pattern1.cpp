#include <iostream>
using namespace std;
int main()
{
    for(int i=1;i<=9;i+=2)
    {
        for(int j=i;j>=1;j-=2)
        {
            cout<<j<<"";
        }
        cout<<"\n";
    }
}
