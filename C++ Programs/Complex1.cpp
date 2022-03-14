#include <iostream>
using namespace std;
class Complex
{
    int sum_r,sum_img,sub_r,sub_img,sum_a,sub_b,p;
public:
    void add(int a,int a2)
    {
        sum_a=a+a2;
    }
public:
    void add(int a1,int a2,int b1,int b2)
    {
        sum_r=a1+a2;
        sum_img=b1+b2;
    }
public:
    void sub(int a1,int a2,int b1,int b2)
    {
        sub_r=a1-a2;
        sub_img=b1-b2;

    }
    public:
        void sub(int b,int a2)
        {
            sub_b=a2-b;
        }
    public:
        void prod(int a1,int a2,int b1,int b2)
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
    int a,b,a1,b1,a2,b2;
    cout<<"Enter the real and imaginary part of first number(s1) : ";
    cin>>a1>>b1;
    cout<<"Enter the real and imaginary part of second number(s2) : ";
    cin>>a2>>b2;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;
    Complex ob;
    ob.add(a,a2);
    ob.add(a1,a2,b1,b2);
    ob.sub(a1,a2,b1,b2);
    ob.sub(b,a2);
    ob.prod(a1,a2,b1,b2);
    ob.disp();
}
