#include<iostream>
#include<string.h>
using namespace std;
class Electric
{
    private:
    int units;
    float bill;
    string name;
public:
    void getdata()
    {
        cout<<"Enter the name : ";
        getline(cin,name);
        cout<<"Enter the units consumed : ";
        cin>>units;
        cin.ignore();
    }
    void calc()
    {
        if(units>=0&&units<=100)
        bill=50+(0.6*units);
        else if(units>100&&units<=300)
        bill=50+(0.6*100)+0.80*(units-100);
        else if(units>300)
        bill=50+(0.6*100)+0.80*(200)+0.90*(units-300)+0.15*(units-300);
    }
    void showdata()
    {
        cout<<"\nName="<<name;
        cout<<"\nBill="<<bill;
        cout<<endl;
    }
};
int main()
{
    Electric E[3];
    int i;
    for(i=0;i<3;i++)
    {
        E[i].getdata();
    }
    for(i=0;i<3;i++)
    {
        E[i].calc();
        E[i].showdata();
    }
    return 0;
}
