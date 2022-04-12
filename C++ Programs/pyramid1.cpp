#include<iostream>
using namespace std;
int main()
{
    int x=1;
    for(int i=1;i<=5;i++)
    {
        for(int j=5-i;j>=1;j--)
        cout<<" ";
            for(int k=1;k<=2*i-1;k++)
            {
                cout<<x;
                if(k<i)
                    ++x;
                else
                    --x;
            }
            x=1;
            cout<<"\n";
    }
}
