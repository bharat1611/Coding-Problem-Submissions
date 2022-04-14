#include <iostream>
using namespace std;
int main()
{
    int a,b,sum=0,d=0,p=1;
    cout<<"Enter a Number :";
    cin>>a;
    b=a;
    while(b>0)
    {
       d=b%10;
       b=b/10;
       sum+=d;
       p*=d;
    }
    if((sum+p)==a)
    {
        cout<<"\nSpecial 2 Digit Number\n";
    }
    else
    {
        cout<<"\nNot Special 2 Digit Number\n";
    }
}
