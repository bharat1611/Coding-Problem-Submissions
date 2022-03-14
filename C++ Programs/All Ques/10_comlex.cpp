#include <iostream>
using namespace std;
class Complex
{
    int real,img;
public:
    void getdata()
    {
        cin>>real;
        cin>>img;
    }
    void add(Complex c1,Complex c2)
    {
        real=c1.real+c2.real;
        img=c1.img+c2.img;
    }
    void add(int a,Complex c2)
    {
        real=a+c2.real;
        cout<<"Adding a to real part of 2nd num : "<<real<<endl;
    }
    void sub(Complex c1,Complex c2)
    {
        real=c1.real-c2.real;
        img=c1.img-c2.img;
    }
    void sub(Complex c1,int b)
    {
        real=c1.real-b;
        cout<<"Subtracting b from real part of 1st Num : "<<real<<endl;
    }
    void disp()
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }
};
main()
{
    Complex c1,c2,c3;
    int a,b;
    cout<<"Enter the real and img part of 1st num : ";
    c1.getdata();
    cout<<"Enter the real and img part of 2nd num :  ";
    c2.getdata();
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;
    cout<<"Sum of the two numbers is : ";
    c3.add(c1,c2);
    c3.disp();
    cout<<"Difference of the two numbers is  : ";
    c3.sub(c1,c2);
    c3.disp();
    c3.add(a,c2);
    c3.sub(c1,b);
}
