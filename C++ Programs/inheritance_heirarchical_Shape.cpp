#include <iostream>
using namespace std;

class Shape
{
protected:
    float a,b;
public:
    void getdata()
    {
        cout<<"Enter the sides of the figure : ";
        cin>>a>>b;
    }
};

class Square:public Shape
{
public:
    void calc_Sq()
    {
        if(a==b)
        {
            cout<<"Figure is a Square and the area is : " <<a*b<<endl;
        }
        else
        {
            cout<<"The figure is not a Square"<<endl;
        }
    }
};
class Rectangle:public Shape
{
    float area;
public:
    void calc_Rect()
    {
        getdata();
        area=a*b;
        cout<<"Area of the rectangle is : " <<area<<endl;
    }
};

class Triangle:public Shape
{

};
