#include<iostream>
using namespace std;
//class shape
class Shape
{
public:
double height,base;
Shape()
{
height=0;
base=0;
}
void get_data()
{
 cout<<"\nEnter height and base to compute area : ";
 cin>>height>>base;
}
virtual void display_area()
{
}
};
class Triangle : public Shape
{
public:
void display_area()
{
cout<<"\nArea of Triangle = "<<(height*base)/2;
}
};
class Rectangle : public Shape
{
public:
void display_area()
{
cout<<"\nArea of Rectangle = "<<height*base;
}
};
int main()
{
Shape *s;
Triangle t;
t.get_data();
s=&t;
s->display_area();
Rectangle r;
r.get_data();
s=&r;
s->display_area();
return 0;
}

