#include <iostream>
using namespace std;

class Rect;
class Square
{
public:
    int a,ar;

    Square(int x)
    {
        a=x;
    }
    Square area(Square a1)
    {
        a1.ar=a*a;
        return a1;
    }
};

class Rect
{
public:
    int l,b,ar;

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
};

main()
{
    int s,l,b;
    cout<<"Enter the side of the square : ";
    cin>>s;
    cout<<"Enter the length and breadth of rectangle : ";
    cin>>l>>b;
    Square p(s);
    Rect q(l,b);
    p=p.area(p);
    q=q.area(q);
    cout<<endl<<"Before swap :"<<endl;
    cout<<"Area of Square is  : "<<p.ar<<endl;
    cout<<"Area of rectangle is  : "<<q.ar<<endl;
    int temp=0;
    temp=p.ar;
    p.ar=q.ar;
    q.ar=temp;
    cout<<"After swap : "<<endl;
    cout<<"Area of Square is : "<<p.ar<<endl;
    cout<<"Area of Rectangle is : "<<q.ar<<endl;


}
