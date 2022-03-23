#include <iostream>
using namespace std;
class Employee
{
string Employee_name;
int Employee_no,basic,DA,TA,HRA,net_sal;
public:
    void read()
    {
        cout<<"Enter the name of employee : ";
        getline(cin,Employee_name);
        cout<<"Enter the employee number : ";
        cin>>Employee_no;
        cout<<"Enter the basic salary of employee : ";
        cin>>basic;
        cout<<"Enter the DA of employee : ";
        cin>>DA;
        cout<<"Enter the TA of employee : ";
        cin>>TA;
        cout<<"Enter the HRA of employee : ";
        cin>>HRA;
    }
public:
    void calculate()
    {
        net_sal=basic+DA+TA+HRA;
    }
public:
    void display()
    {
        cout<<"\nName of employee : "<<Employee_name;
        cout<<"\nNumber of employee : "<<Employee_no;
        cout<<"\nNet salary of the employee is : "<<net_sal<<"\n";
    }
};
int main()
{
    Employee a;
    a.read();
    a.calculate();
    a.display();
}
