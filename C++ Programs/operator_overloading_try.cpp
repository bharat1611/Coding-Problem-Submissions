#include <iostream>
using namespace std;

class Demo
{
    int a;
public:
    void get()
    {
        cin>>a;
    }                               //To run code,remove either class member functions or friend functions
    Demo operator ++(int)           //Ambiguous Function comparing to friend function
    {
        (this->a)++;
        return *this;
    }
    Demo operator ++()              //Ambiguous function comparing to friend function
    {
        a++;
        return *this;
    }
    void disp()
    {
        cout<<a<<endl;
    }
    friend Demo operator ++(Demo,int);
    friend Demo operator ++(Demo);
};
Demo operator ++(Demo D,int)
{
    D.a=D.a++;
    return D;
}
Demo operator ++(Demo D)
{
    D.a=(++D.a);
    return D;
}

int main()
{
    Demo A,B,C;
    B.get();
    A=B++;
    A.disp();
    A=++B;
    A.disp();
}
