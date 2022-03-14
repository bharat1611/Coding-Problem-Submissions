#include<iostream>
using namespace std;
class tollbooth
{
 unsigned int car;
 double amt;
 public:
 tollbooth()
 {
 this->car = 0;
 this->amt = 0;
 }
 void payingcar()
 {
 this->car++;
 this->amt+=0.50;
 }
 void nonpayingcar()
 {
 this->car++;
 }
 void display()
 {
 cout<<"Number of cars: "<<car<<endl;
 cout<<"Amount: "<<amt<<endl;
 }
};
int main()
{
 char c='y';
 int ch;
 tollbooth t;
 do{
 cout<<" 1 For paying \n 2 For Nopaying \n 3 Display/Exit \n";
 cout<<"Enter choice : ";
 cin>>ch;
 switch(ch)
 {
 case 1:
 t.payingcar();
 cout<<"Car added";
 break;
 case 2:
 t.nonpayingcar();
 cout<<"Car added";
 break;
 case 3:
 t.display();
 c='n';
 break;
 }
 if(c=='y'||c=='Y'){
 cout<<"\nDo you want to continue ? : ";
 cin>>c;
 }
 }
 while(c=='y'||c=='Y');
 return 0;
}

