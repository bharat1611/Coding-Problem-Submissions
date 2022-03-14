#include <iostream>
using namespace std;
class Time
{
    int h,m,s,sum;
public:
    Time()
    {
        h=0;
        m=0;
        s=0;
    }
    void getdata()
    {
        cin>>h>>m>>s;
    }
    void disp()
    {
        cout<<h<<":"<<m<<":"<<s<<endl;
    }
    void add(Time c1,Time c2)
    {
        h=c1.h+c2.h;
        m=c1.m+c2.m;
        s=c1.s+c2.s;
        if(m>=60)
        {
            h=h+1;
            m=m-60;
        }
        if(s>=60)
        {
            m=m+1;
            s=s-60;
        }
        cout<<"Adding the time : "<<h<<":"<<m<<":"<<s<<endl;
    }
};
int main()
{
    Time c1,c2,c3;
    cout<<"Enter the 1st time in HH:MM:SS format : ";
    c1.getdata();
    cout<<"Enter the 2nd time in HH:MM:SS format : ";
    c2.getdata();
    cout<<"The 1st time entered is : ";
    c1.disp();
    cout<<"The 2nd time entered is : ";
    c2.disp();
    c3.add(c1,c2);
}
