#include <iostream>
using namespace std;
class Overload
{
    int s=0;
    double s1=0;
    float s2=0;
public:
    int add(int x,int y)
    {
        s=x+y;
        return s;
    }
    double add(double x,double y)
    {
        s1=x+y;
        return s1;
    }
    float add(float x,float y)
    {
        s2=x+y;
        return s2;
    }
};
main()
{
    Overload obj;
    cout<<"Integers : "<<obj.add(12,14)<<endl;
    cout<<"Double : "<<obj.add(13.2,12.5)<<endl;
    cout<<"Float : "<<obj.add(12.5,16.7)<<endl;
}
