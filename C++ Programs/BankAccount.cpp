#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
    string name,type;
    int accNo,bal;
public:
    void getData()
    {
        cout<<"Enter the Name of The Depositor : ";
        getline(cin,name);
        cout<<"Enter the account number : ";
        cin>>accNo;
        cout<<"Enter the type of Account(Savings,Current etc,) : ";
        cin>>type;
        cout<<"Enter the balance amount in the account : ";
        cin>>bal;
    }
public:
    void deposit()
    {
        int dep=0;
        cout<<"Enter the amount to be deposited : ";
        cin>>dep;
        bal=bal+dep;
    }
public:
    void withdraw()
    {
        int wd=0;
        cout<<"Enter the amount to withdraw : ";
        cin>>wd;
        bal=bal-wd;
    }
public:
    void disp()
    {
        cout<<"Name of the depositor is : "<<name<<endl;
        cout<<"Balance is : "<<bal<<endl;
    }
};

int main()
{
    int ch,x,i=0;
    BankAccount obj;
    obj.getData();
    do
    {

        cout<<"Press 1 to Deposit : "<<endl;
        cout<<"Press 2 to Withdraw : "<<endl;
        cout<<"Press 3 to display details : "<<endl;
        cout<<"Enter your choice  : ";
        cin>>ch;
        cout<<endl;
        switch(ch)
        {
        case 1:
            obj.deposit();
            break;
        case 2:
            obj.withdraw();
            break;
        case 3:
            obj.disp();
            break;
        default:
            cout<<"Wrong Choice"<<endl;
            break;
        }
        cout<<endl;
        cout<<"Enter 1 to continue,0 to exit : ";
        cin>>x;
        cout<<endl;
    }while(x==1);
}
