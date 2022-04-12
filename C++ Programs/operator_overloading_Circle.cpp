#include <iostream>
using namespace std;

class Circle
{
public:
    double r=0,area=0;
    void getdata()
    {
        cin>>r;
    }
    void calc()
    {
        area=(3.14)*r*r;
    }
    Circle operator <(Circle d)
    {
        if((this->area)<d.area)
        {
            return (*this);
        }
        else
            return d;
    }
};

int main()
{
    Circle c,d,e;
    cout<<"Enter the radius of the first circle : ";
    c.getdata();
    c.calc();
    cout<<"Enter the radius of the second circle : ";
    d.getdata();
    d.calc();
    cout<<"The area of first circle is : "<<c.area<<endl;
    cout<<"The area of second circle is : "<<d.area<<endl;
    cout<<"The smaller of the two areas is : ";
    e=c<d;
    cout<<e.area<<endl;
}
