#include <iostream>
using namespace std;

class Employee
{
    string name;
    int sal;
public:
    void getdata()
    {
        cin>>name;
        cin>>sal;
    }
    void display()
    {
        cout<<"Name : "<<name;
        cout<<"Salary : "<<sal<<endl;
    }
    int calc()
    {
        return sal;
    }
};

int main()
{
    Employee obj[3];
    for(int i=0;i<3;i++)
    {
        obj[i].getdata();
    }
        for(int i=0;i<3;i++)
    {
        obj[i].display();
    }
    int m=0,pos=0;
    m=obj[0].calc();
    for(int i=0;i<3;i++)
    {
        if(m<=obj[i].calc())
        {
            m=obj[i].calc();
            pos=i;
        }
    }
    obj[pos].display();
}
