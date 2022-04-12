#include <iostream>
using namespace std;

class A
{
protected:
    int a,b;
public:
    void getdata()
    {
        cout<<"Input the values of a and b:  ";
        cin>>a>>b;
    }
};
class B:public A
{

    int s=0;
public:
    void print_sum()
    {
        getdata();
        s=a+b;

        cout<<a<<"+"<<b<<"="<<s;
    }
};

int main()
{
    B obj;
    obj.print_sum();
}
