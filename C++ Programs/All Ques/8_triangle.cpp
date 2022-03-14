#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
class Triangle
{
    float a,b,c,s,area,p;
public:
    Triangle()
    {
        a=0;
        b=0;
        c=0;
    }
    void getData()
    {
        cout<<"Enter the three sides of the triangle : ";
        cin>>a>>b>>c;
    }
    void calc_area()
    {
        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        cout<<"Area of the triangle is : "<<setprecision(3)<<area<<endl;
    }
    void calc_peri()
    {
        p=a+b+c;
        cout<<"Perimeter of the triangle is : "<<p<<endl;
    }
};
int main()
{
    Triangle obj;
    obj.getData();
    obj.calc_area();
    obj.calc_peri();
    return 0;
}
