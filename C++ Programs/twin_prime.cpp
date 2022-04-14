#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    if(a-b==2 || a-b==-2)
        {
        int l=0,c=0,c1=0;
        if(a<b)
        l=b/2;
        else
        l=a/2;
        for(int i=2;i<=l; i++)
            {
                if(a%i==0)
                c++;
                if(b%i==0)
                c1++;
            }
        if(c==0 && c1==0)
        cout<<"Twin Prime";
        else
        cout<<"Not twin prime ";
        }
        else
        cout<<" Not Twin Prime ";
}
