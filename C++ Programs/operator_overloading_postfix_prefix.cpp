#include <iostream>
using namespace std;

class Complex
{
    int real,img;
public:
    void get()
    {
        cin>>real>>img;
    }
    Complex operator ++(int)
    {
        Complex t;
        t.real=this->real+5;
        t.img=this->img-6;
        return t;
    }
    Complex operator ++()
    {
        Complex t;
        t.real=this->real+7;
        t.img=this->img+2;
        return t;
    }
    void display()
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }
};

int main()
{
    Complex a,b;
    b.get();
    a=b++;
    a.display();
    a=++b;
    a.display();
}
