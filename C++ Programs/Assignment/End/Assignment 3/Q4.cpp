#include <iostream>
using namespace std;

class First
{
public:
    First()
    {
        cout<<"Constructor for class First"<<endl;
    }
};

class Second
{
    int a;
public:
    Second(int x)
    {
        a=x;
        cout<<"Constructor for class Second"<<endl;
    }
    void print()
    {
        cout<<a<<endl;
    }
};
class Third:public First,public Second
{
    int b;
    public:Third(int x,int y):First(),Second(y)
    {
        b=x;
        cout<<"Constructor for class Third"<<endl;
    }
    void print1()
    {
        print();
        cout<<b<<endl;
    }
};
int main()
{
    Third obj(2,3);
    obj.print1();
}
