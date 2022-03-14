#include <iostream>
#include <string>
using namespace std;
class Dist
{
public:
    int inches,feet,sum;
    Dist()
    {
        inches=0;
        feet=0;
        sum=0;
    }
    Dist(int x,int y)
    {
        inches=x;
        feet=y;
    }
    void add(Dist c1,Dist c2)
    {
        c1.sum=12*(c1.inches)+c1.feet;
        c2.sum=12*(c2.inches)+c2.feet;
        cout<<c1.sum/12<<" feet and "<<c1.sum%12<<" inches"<<endl;
        cout<<c2.sum/12<<" feet and "<<c2.sum%12<<" inches"<<endl;
    }
};
main()
{
    Dist o;
    Dist obj(1,10);
    Dist obj1(3,11);
    o.add(obj,obj1);
}
