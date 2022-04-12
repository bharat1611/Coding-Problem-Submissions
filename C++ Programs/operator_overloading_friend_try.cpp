#include <iostream>
using namespace std;

class Demo
{
    int a=0;
public:
    void get()
    {
        cout<<"Enter the value of a : ";
        cin>>a;
    }
    friend Demo operator +(Demo,int );
    friend Demo operator +(int,Demo);

    void disp()
    {
        cout<<a<<endl;
    }
};


Demo operator +(Demo D,int x)
{
    Demo T;
    T.a=D.a+x;
    return T;
}

Demo operator +(int x,Demo D)
{
    Demo T;
    T.a=x+D.a;
    return T;
}

int main()
{
    Demo A,B;
    cout<<"This is a program to overload + operator using friend function"<<endl<<"It will add 5 to the value entered"<<endl;
    B.get();
    A=B+5;
    A.disp();
    A=5+B;
    A.disp();
    A=B+5;
    A.disp();
}
