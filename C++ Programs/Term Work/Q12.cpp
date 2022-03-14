#include <iostream>
using namespace std;
class Base {
 private:
 int pvt = 2;
 protected:
 int prot = 1;
 public:
 int pub = 5;
 int getPVT() {
 return pvt;
 }
};
class PublicDerived : public Base {
 public:
 int getProt() {
 return prot;
 }
};
int main() {
 PublicDerived object1;
 cout << "Private = " << object1.getPVT() << endl;
 cout << "Protected = " << object1.getProt() << endl;
 cout << "Public = " << object1.pub << endl;
 return 0;
}

