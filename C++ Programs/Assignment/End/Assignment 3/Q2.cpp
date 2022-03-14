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
        cout<<endl;
        display_mammal();
        cout<<"This is the Dog class inheriting publicly from Mammal Class"<<endl;
    }

};
class Cat:public Mammal
{
public:
    void display_cat()
    {
        cout<<endl;
        display_mammal();
        cout<<"This is the Cat class inheriting publicly from Mammal class"<<endl;
    }
};
class Horse:public Mammal
{
public:
    void display_horse()
    {
        cout<<endl;
        display_mammal();
        cout<<"This is the Horse class inheriting publicly from Mammal class"<<endl;
    }
};
class GuineaPig:public Mammal
{
public:
    void display_guineapig()
    {
        cout<<endl;
        display_mammal();
        cout<<"This is GuineaPig class inheriting publicly from Mammal class"<<endl;
    }
};
int main()
{
    Dog d;
    Cat c;
    Horse h;
    GuineaPig g;
    d.display_dog();
    c.display_cat();
    h.display_horse();
    g.display_guineapig();
}
