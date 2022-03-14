#include <iostream>
using namespace std;

class Enter
{
    int value;
public:
    void getValue()
    {
        cin>>value;
        if(value>0 && value<10)
            cout<<"Value entered is valid"<<endl;
        else
            throw("Value out of Range\n");
    }
};

int main()
{
    Enter e;
    try
    {
        cout<<"Enter a value between 0 and 10 : ";
        e.getValue();

    }
    catch(const char *d)
    {
        cout<<d;
    }
}
