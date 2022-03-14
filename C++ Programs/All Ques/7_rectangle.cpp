#include <iostream>
using namespace std;

class Rectangle
{
    int len,b;
    public :
    Rectangle()
    {
        len=0;
        b=0;
        cout<<"Area is : "<<len*b<<endl;
    }
    Rectangle(int x,int y)
    {
        len=x;
        b=y;
        cout<<"Area is : "<<len*b<<endl;
    }
    Rectangle(int s)
    {
        len=s;
        b=s;
        cout<<"Area is : "<<len*b;
    }

};
main()
{
    Rectangle obj;
    Rectangle obj1(10,20);
    Rectangle obj2(20);
}
