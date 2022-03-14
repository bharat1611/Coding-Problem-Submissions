#include <iostream>
using namespace std;

class Complex
{
    public:
    int real,img;
    void getdata()
    {
        cout<<"Enter real and img part : ";
        cin>>real>>img;
    }
    friend void add(Complex c1,Complex c2);
};
void add(Complex c1,Complex c2)
{
    int r,i;
    r=c1.real+c2.real;
    i=c1.img+c2.img;
    cout<<r<<" + "<<i<<"i"<<endl;
}
int main()
{
    Complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    add(c1,c2);
    return 0;
}
