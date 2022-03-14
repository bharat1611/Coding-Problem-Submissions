#include <iostream>
using namespace std;
int main()
{
    int a,b,c,D;
    float x,y;
    cout<<"Enter the coefficients of Quadratic Equation a,b,c : ";
    cin>>a>>b>>c;
    D=b*b-4*a*c;
    if(D<0)
        cout<<"\nNo Real Roots"<<endl;
    else if(D==0)
    {
        x=b/(2*a);
        cout<<"\nOne Real Root : "<<x<<endl;
    }
    else
    {
        x=(-b+D)/2*a;
        y=(-b-D)/2*a;
        cout<<"Two Real Roots : "<<x<<"\t"<<y<<endl;
    }
}
