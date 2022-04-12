#include <iostream>
using namespace std;

class A
{
protected:
    int a;
public:
    void get()
    {
        cout<<"Enter the value of a :";
        cin>>a;
    }
};

class B
{
protected:
    int b;
public:
    void getb()
    {
        cout<<"Enter the value of b :";
        cin>>b;
    }
};

class C:public A,public B
{
protected:
    int s;
public:
    void sum()
    {
        get();
        getb();
        s=a+b;
        cout<<"Sum of a and b is : "<<s;
    }
};

int main()
{
    C obj;
    obj.sum();
}
