#include <iostream>
#include <string>
using namespace std;
class Topper
{
    string name;
    int roll,sub[5];
    float a;
	public:
    void getdata()
    {
		cout<<"Name : ";
		cin>>name;

		cout<<"Roll no : ";
		cin>>roll;
		cout<<"Enter the marks of the student : ";
		for(int i=0;i<5;i++)
		{
			cin>>sub[i];
		}
		cin.ignore();
		cout<<endl;
    }
    int calc()
    {
        for(int i=0;i<5;i++)
        {
			a=a+sub[i];
        }
        return a;
    }
    void display()
    {
		cout<<endl;
        cout<<"Name of topper : "<<name<<endl;
        cout<<"Roll number of topper: "<<roll;
    }
};

int main()
{
    Topper obj[10];
    float avg[10];
    for(int i=0;i<10;i++)
    {
		cout<<"Enter the details of student "<<i+1<<endl;
		obj[i].getdata();
		avg[i]=obj[i].calc();
    }
    int m,pos=0;
    m=avg[0];
    for(int i=1;i<10;i++)
    {
		if(m<avg[i])
		{
			m=avg[i];
			pos=i;
		}
    }
    obj[pos].display();
    return 0;
}
