#include <iostream>
using namespace std;
 class Invoice
 {
     string pNum,pDes;
     int quan;
     double ppi,amt;
 public:
    Invoice(string n,string m,int a,double b)
    {
        pNum=n;
        pDes=m;
        quan=a;
        ppi=b;
    }
    double getInvAmt()
    {

        if(quan<0)
            quan=0;
        if(ppi<0)
            ppi=0.0;
        amt=quan*ppi;
        return amt;
    }
    void disp()
    {
        cout<<endl;
        cout<<"Number is : "<<pNum<<endl;
        cout<<"Description is : "<<pDes<<endl;
        cout<<"Quantity of the item purchased : "<<quan<<endl;
        cout<<"Parts per item : "<<ppi<<endl;
        cout<<"Amount : "<<getInvAmt();
    }
 };
 main()
 {
     string n,m;
     int a;
     double p;
     cout<<"Enter the number : ";
     cin>>n;
     cin.ignore();
     cout<<"Enter the description : ";
     cin>>m;
     cout<<"Enter the quantity of the item purchased : ";
     cin>>a;
     cout<<"Enter the parts per item : ";
     cin>>p;
     Invoice obj(n,m,a,p);
     obj.disp();
 }
