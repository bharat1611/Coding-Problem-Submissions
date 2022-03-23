#include <iostream>
using namespace std;

class Myexception:public exception
{
    public:
    const char *what()const throw()
    {
        return "You are not eligible for vote " ;
    }
};

int main()
{
    try
    {
        int age;
        cin>>age;
        if(age<18)
        {
            Myexception e;
            throw e;
        }
        else
            cout<<"You can vote";
    }
    catch(Myexception &e)
    {
        cout<<e.what();
    }
}

