#include <iostream>
#include <string>
using namespace std;

class Employee
{
    string E_name=" ";
    int basic,DA,TA,HRA,net_sal;
public:
    void getData()
    {
        cout<<"Enter the name of the Employee : ";
        getline(cin,E_name);
        cout<<"Enter the basic salary,DA,TA and HRA of Employee : ";
        cin>>basic>>DA>>TA>>HRA;
    }
    void calc()
    {
        net_sal=basic+DA+TA+HRA;
    }
    void display()
    {
        cout<<endl;
        cout<<"Name Of the Employee is  : "<<E_name<<endl;
        cout<<"Net Salary of "<<E_name<<" is : "<<net_sal<<endl;
    }
};
int main()
{
    int n;
    cout<<"Enter the Number of Employees : ";
    cin>>n;
    Employee obj[n];
    for(int i=0;i<n;i++)
    {
        cout<<endl<<"For Employee "<<i+1<<" : "<<endl;
        cin.ignore();
        obj[i].getData();
        obj[i].calc();
        obj[i].display();
    }

}
