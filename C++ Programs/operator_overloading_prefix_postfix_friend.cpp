#include <iostream>
using namespace std;

class Demo
{
    int a=0;
public:
    void get()
    {
        cout<<"Enter the value of a:  ";
        cin>>a;
    }
    friend Demo operator ++(Demo);
    friend Demo operator ++(Demo,int);
    void disp()
    {
        cout<<a<<endl;
    }
};

Demo operator ++(Demo D)
{
    D.a=++(D.a);
    return D;
}
Demo operator ++(Demo A,int)
{
    A.a=(A.a)++;
    return A;

}

int main()
{
    Demo A,B;
    B.get();
    cout<<"Using prefix operator : ";
    A=++B;
    A.disp();
    cout<<"Using postfix operator : ";
    A=B++;
    A.disp();

}

