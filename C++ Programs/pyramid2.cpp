#include<iostream>
using namespace std;
int main()
{
    int c=65;
    for(int i=5;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<char(c)<<" ";
            ++c;
        }
        cout<<"\n";
    }
}
