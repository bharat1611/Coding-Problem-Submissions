#include <iostream>
using namespace std;

class Rect;
class Square
{
    int a,ar;
public:
    Square(int x)
    {
        a=x;
    }
    Square area(Square a1)
    {
        a1.ar=a*a;
        return a1;
    }
    friend void swapp(Square s,Rect r);
};

class Rect
{
    int l,b,ar;
public:
    Rect(int x,int y)
    {
        l=x;
        b=y;
    }
    Rect area(Rect a2)
    {
        a2.ar=l*b;
        return a2;
    }
    friend void swapp(Square s,Rect r);
};

void swapp(Square s,Rect r)
{
    s=s.area(s);
    r=r.area(r);
    cout<<endl<<"Before swap :"<<endl;
    cout<<"Area of Square is  : "<<s.ar<<endl;
    cout<<"Area of rectangle is  : "<<r.ar<<endl;
    int temp=0;
    temp=s.ar;
    s.ar=r.ar;
    r.ar=temp;
    cout<<"After swap : "<<endl;
    cout<<"Area of Square is : "<<s.ar<<endl;
    cout<<"Area of Rectangle is : "<<r.ar<<endl;
}
main()
{
    int a,l,b;
    cout<<"Enter the side of the square : ";
    cin>>a;
    cout<<"Enter the length and breadth of rectangle : ";
    cin>>l>>b;
    Square s(a);
    Rect r(l,b);
    swapp(s,r);



}
