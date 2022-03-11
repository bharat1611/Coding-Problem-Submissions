#include <iostream>
using namespace std;

class Demo
{
public:
    int a[5];
    void getdata()
    {

        for(int i=0;i<5;i++)
        {
            cin>>a[i];
        }
    }
    void display()
    {
        for(int i=0;i<5;i++)
        {
            cout<<a[i]<<"   ";
        }
    }


};

int main()
{
    int n;
    cout<<"Enter the number of test cases : " ;
    cin>>n;
    Demo obj[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the values of object "<<i+1<<" : ";
        obj[i].getdata();
    }
    cout<<"Displaying the data : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"For obj "<<i+1<<" the values are : ";
        obj[i].display();
        cout<<endl;
    }

}
