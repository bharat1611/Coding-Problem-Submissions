#include <iostream>
using namespace std;
class Circle

{
private:
    int r;
    float area,cir;
public:
    void get();
    float calc_area();
    float calc_cir();
    void disp();
};

void Circle::get()
{
    cout<<"Enter the value of radius : ";
    cin>>r;
}
float Circle::calc_area()
{
    return(3.14*r*r);
}
float Circle::calc_cir()
{
    return(2*3.14*r);
}
void Circle::disp()
{
    cout<<"The area of the circle is  : "<<calc_area()<<endl;
    cout<<"The circumference of the circle is : "<<calc_cir()<<endl;
}

main()
{
    Circle obj;
    obj.get();
    obj.disp();
}
