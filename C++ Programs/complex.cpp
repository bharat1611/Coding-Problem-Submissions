#include <iostream>
using namespace std;
class Complex
{
    int a,b,a1,b1,a2,b2,sum_r,sum_img,sub_r,sub_img,sum_a,sub_b,p;
public:
    void read()
    {
        cout<<"Enter the real and imaginary part of first number(s1) : ";
        cin>>a1>>b1;
        cout<<"Enter the real and imaginary part of second number(s2) : ";
        cin>>a2>>b2;
        cout<<"Enter the value of a : ";
        cin>>a;
        cout<<"Enter the value of b : ";
        cin>>b;
    }
    public:
    void add()
    {
        sum_r=a1+a2;
        sum_img=b1+b2;
        sum_a=a+a2;
    }
    public:
        void subtract()
        {
            sub_r=a1-a2;
            sub_img=b1-b2;
            sub_b=a2-b;
        }
    public:
        void product()
        {
            p=(a1*a2)-(b1*b2);
        }

    public:
        void disp()
        {
            cout<<"Sum of a and real part of s2 is : "<<sum_a<<endl;
            cout<<"Sum of s1 and s2 is : "<<sum_r<<" + i"<<sum_img<<endl;
            cout<<"Difference of s1 and s2 is : "<<sub_r<<" + i("<<sub_img<<")"<<endl;
            cout<<"Difference of b and real part of s2 is : "<<sub_b<<endl;
            cout<<"Product of s1 and s2 is : "<<p<<endl;

        }


};
int main()
{
    Complex ob;
    ob.read();
    ob.add();
    ob.subtract();
    ob.product();
    ob.disp();

}
