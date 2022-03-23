#include <iostream>
using namespace std;

class B;
class A
{
    int a;
public:
    A(int x)
    {
        a=x;
    }
    friend int add(A&,B&);

};
class B
{
    int b;
public:
    B(int y)
    {
        b=y;
    }
    friend int add(A&,B&);
};
int add(A&t1,B&t2)
{
    return(t1.a+t2.b);
}
main()
{
    A ob1(100);
    B ob2(200);
    cout<<"Addition is : "<<add(ob1,ob2);
    return 0;
}
