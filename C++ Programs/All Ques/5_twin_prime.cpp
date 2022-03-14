#include <iostream>
using namespace std;
int main()
{
    int n,m,c=0,d=0;
    cout<<"Enter the two numbers : ";
    cin>>n>>m;

    if(n-m==2 || n-m==-2)
    {
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
                c++;
        }
        for(int i=1;i<=m;i++)
        {
            if(m%i==0)
                d++;
        }
        if(c==2 && d==2)
            cout<<"Twin Prime\n";
        else
            cout<<"Not Twin Prime\n";
    }
    else
        cout<<"Not Twin Prime\n";
}
