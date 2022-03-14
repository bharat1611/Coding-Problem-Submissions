#include <iostream>
using namespace std;

class Square
{
    int a;
    float area,peri;
public:
    void get();
    float calc_area();
    float calc_peri();
    void disp();
};

void Square::get()
{
    cout<<"Enter the side of the square : ";
    cin>>a;
}
float Square::calc_area()
{
    return(a*a);
}
float Square::calc_peri()
{
    return(4*a);
}
void Square::disp()
{
    cout<<"The area of the Square is  : "<<calc_area()<<endl;
    cout<<"The perimeter of the Square is  : "<<calc_peri()<<endl;
}

main()
{
    Square obj;
    obj.get();
    obj.disp();
}
