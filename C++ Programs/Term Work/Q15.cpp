#include<iostream>
#include <cmath>
#include <iomanip>
const float PI = 3.14;
using namespace std;
class Cal_area
{
 public:
 float r,h;
 Cal_Volume()
 {
 r=0;
 h=0;
 }
 void getdata ()
 {
 cout<<endl<<"Enter radius and height : ";
 cin>>r>>h;
 }
 virtual void display_volume() =0;
};
class Cone :public Cal_area
{
 public: void display_volume()
 {
 cout<<"Volume of Cone : "<<(1/(float)3)*PI*r*r*h<<endl ;
 }
};
class Hemisphere:public Cal_area
{
 public: void display_volume()
 {
 cout<<"Volume of Hemisphere : "<<(2/(float)3)*PI*r*r*r<<endl;
 }
};
class Cylinder: public Cal_area
{
 public: void display_volume ()
 {
 cout<<"Volume of Cylinder : "<<PI*r*r*h<<endl;
 }
};
int main()
{
 Cal_area *ca;
 Cone co;
 ca= &co;
 ca->getdata();
 ca->display_volume();
 Cal_area *cb;
 Cylinder cy;
 cb= &cy;
 cb->getdata();
 cb->display_volume();
 Cal_area *cc;
 Hemisphere he;
 cc= &he;
 cc->getdata();
 cc->display_volume();
 return 0;
}

