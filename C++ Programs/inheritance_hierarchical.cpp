 #include <iostream>
using namespace std;

class A
{
protected:
    int a=0;
public:
    void get()
    {
        cout<<"Enter the value of a : ";
        cin>>a;
    }
};

class B:public A
{
    int b=0;
public:

    void f_B()
    {
        get();
        b=a+5;
        cout<<"Adding 5 to a we get : " <<b<<endl;
    }
};

class C:public A
{
    int c=0;
    public: void f_C()
    {
        get();
        c=a+10;
        cout<<"Adding 10 to a we get : " <<c<<endl;
    }
};

int main()
{
    B obj;
    C obj1;
    obj.f_B();
    obj1.f_C();
}
