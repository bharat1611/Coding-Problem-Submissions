#include<iostream>
using namespace std;
class UnaryFriend
{
 int a=10;
 int b=20;
 public:
 void getvalues()
 {
 cout<<"Values of A & B : ";
 cout<<a<<"  "<<b<<"  "<<endl;
 }
 void show()
 {
 cout<<a<<"  "<<b<<"  "<<endl;
 }
 void friend operator-(UnaryFriend &x);
 void friend operator ++(UnaryFriend &x);
 void friend operator --(UnaryFriend &x);
};
void operator-(UnaryFriend &x)
{
 x.a = -x.a;
 x.b = -x.b;
}
 void operator++(UnaryFriend &x)
 {
 x.a=++x.a;
 x.b=x.b++;
 }
 void operator--(UnaryFriend &x)
 {
 x.a=--x.a;
 x.b=x.b--;
 }
int main()
{
 UnaryFriend x1;
 UnaryFriend x2;
 UnaryFriend x3;
 x1.getvalues();
 cout<<"Before Overloading : ";
 x1.show();
 cout<<"After Overloading : ";
 -x1;
 x1.show();
 cout<<endl;
 x2.getvalues();
 cout<<"Before Pre and Post increment Overloading : ";
 x2.show();
 cout<<"After Pre and Post increment Overloading : ";
 ++x2;
 x2.show();
 cout<<endl;
 x3.getvalues();
 cout<<"Before Pre and Post decrement Overloading : " ;
 x3.show();
 cout<<"After Pre and Post decrement Overloading : ";
 --x3;
 x3.show();
 return 0;
}

