#include <iostream>
using namespace std;
 class Bank
 {
     string name,type;
     public: int acc_no,bal,bal1=0;
 public:
    void getdata()
    {
        cout<<"Enter the name : ";
        getline(cin,name);
        cout<<"Enter the account number  : ";
        cin>>acc_no;
        cout<<"Enter the type of account : ";
        cin>>type;
        cout<<"Enter the balance amount : ";
        cin>>bal;
    }
   void deposit()
    {
        int dep=0;
        cout<<"Enter amount to deposit : ";
        cin>>dep;
        bal=bal+dep;
    }
    void withdraw()
    {
        int wit=0;
        cout<<"Enter amount to withdraw : ";
        cin>>wit;
        bal=bal-wit;
    }
   void display()
   {
        cout<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Account number : "<<acc_no<<endl;
        cout<<"Type : "<<type<<endl;
        cout<<"Balance : "<<bal<<endl;
    }
 };

main()
{
    Bank obj;
    obj.getdata();
    obj.deposit();
    obj.withdraw();
    obj.display();
}
