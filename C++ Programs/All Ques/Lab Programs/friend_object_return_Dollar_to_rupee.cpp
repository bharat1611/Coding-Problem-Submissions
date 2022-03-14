#include <iostream>
using namespace std;
class Rupee;
class Dollar
{
public:
    float val,f;
    Dollar(float x)
    {
        val=x;
    }
    friend Dollar totalval(Dollar d,Rupee r);
    friend Rupee totalval(Rupee x,Dollar y);
};

class Rupee
{
public:
    float val,s;
    Rupee(float y)
    {
        val=y;
    }
    friend Dollar totalval(Dollar d,Rupee r);
    friend Rupee totalval(Rupee x,Dollar y);
};
Dollar totalval(Dollar d,Rupee r)
{
    d.f=d.val+r.val/72;
    return d;
}

Rupee totalval(Rupee x,Dollar y)
{
    x.s=x.val+y.val*72;
    return x;
}
main()
{
    int n,m;
    cout<<"Enter the Dollar amount : ";
    cin>>n;
    cout<<"Enter the Rupee amount : ";
    cin>>m;
    Dollar obj(n);
    Rupee obj1(m);
    obj=totalval(obj,obj1);
    obj1=totalval(obj1,obj);
    cout<<endl;
    cout<<"Total value in Dollars is : "<<obj.f<<endl;
    cout<<"Total value in Rupees is : "<<obj1.s<<endl;
}
