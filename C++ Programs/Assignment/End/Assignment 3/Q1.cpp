#include <iostream>
using namespace std;

class Mammal
{
public:
    void display_mammal()
    {
        cout<<"This is the Mammal class"<<endl;
    }
};
class Dog:public Mammal
{
public:
    void display_dog()
    {
        display_mammal();
        cout<<"This is the Dog class inheriting publicly from Mammal Class"<<endl;
    }
};
int main()
{
    Dog obj;
    obj.display_dog();
}
