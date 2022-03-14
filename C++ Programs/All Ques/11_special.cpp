#include <iostream>
using namespace std;

int main()
{
    int n,t,d,sum=0,p=1;
    cout<<"Enter the Number : ";
    cin>>n;
    t=n;
    while(t>0)
    {
        d=t%10;
        sum=sum+d;
        p=p*d;
        t=t/10;
    }
    if((sum+p)==n)
        cout<<"Special 2-digit Number "<<endl;
    else
        cout<<"Not a Special 2-digit Number"<<endl;
}
