#include <iostream>
using namespace std;

class Complex
{
    public:
    int real,img;

    void getdata()
    {
        cin>>real>>img;
    }
    Complex operator +(Complex c1)
    {
        Complex temp;
        temp.real=real+c1.real;
        temp.img=img+c1.img;
        return temp;
    }
    Complex operator -(Complex c1)
    {
        Complex temp;
        temp.real=real-c1.real;
        temp.img=img-c1.img;
        return temp;
    }
};
int main()
{
    Complex A,B,C;
    cout<<"Enter the real and imaginary part of 1st number : ";
    B.getdata();
    cout<<"Enter the real and imaginary part of 2nd number : ";
    C.getdata();
    A=B+C;
    cout<<"The Sum of the numbers is : ";
    cout<<A.real<<" + "<<A.img<<"i"<<endl;
    A=B-C;
    cout<<"The Difference of the numbers is : ";
    cout<<A.real<<" + "<<A.img<<"i"<<endl;
}

