#include <iostream>
using namespace std;

class A
{
protected:
    int a;
public:
    void getdata_A()
    {
        cout<<"Enter the value of a : ";
        cin>>a;
    }
};

class B:public A
{
protected :
    int b;
public:
    void getdata_B()
    {
        cout<<"Enter the value of b : ";
        cin>>b;
    }
};

class C:public B
{
protected :
    int sum;
public:
    void getdata()
    {
        getdata_A();
        getdata_B();
        sum=a+b;
        cout<<"Sum of a and b is : "<<sum;
    }
};

int main()
{
    C obj;
    obj.getdata();
}
