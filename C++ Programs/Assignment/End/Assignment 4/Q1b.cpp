#include <iostream>
using namespace std;

class Enter
{
    int value;
public:
    int getValue()
    {
        cout<<"Enter a value between 0 and 10 : ";
        cin>>value;
        if(value>0 && value<10)
        {
            return 1;
        }
        else
            return 0;
    }
};

int main()
{
    Enter e;
    try
    {
        int c=0;
        while(1)
        {
            c=e.getValue();
            if(c==1)
            {
                throw("Valid\n");
            }
            else
            {
                cout<<"Value out of range\n";
                continue;
            }
        }
    }
    catch(const char *d)
    {
        cout<<d;
    }
}
