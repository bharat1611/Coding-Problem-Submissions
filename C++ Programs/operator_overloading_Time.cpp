#include <iostream>
using namespace std;

class Time
{
public:
    int hour,mins,sec;
    void getdata()
    {
        cout<<"Enter the time in hours:minutes:seconds : ";
        cin>>hour>>mins>>sec;
    }
    Time operator ++(int)
    {
        if(sec==59)
        {
            mins=++mins;
            sec=0;
        }
        if(mins>=60)
        {
            hour=++hour;
            mins=0;
        }
        else if(sec!=0)
        {
            sec=++sec;
        }
        return *this;
    }
};

int main()
{
    Time B;
    B.getdata();
    B++;
    cout<<"The final time after adding one second is : ";
    cout<<B.hour<<":"<<B.mins<<":"<<B.sec;
}
