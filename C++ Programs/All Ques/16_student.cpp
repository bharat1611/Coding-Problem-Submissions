#include <iostream>
#include <string>
using namespace std;
class Student
{
public:

    string name;
    int roll_no,marks;
    static int count;
    Student()
    {
        name=" ";
        roll_no=0;
        marks=0;
        count++;
    }
    void getdata()
    {
        cout<<"Enter the name : ";
        getline(cin,name);
        cout<<"Enter the roll no : ";
        cin>>roll_no;
        cout<<"Enter the marks : ";
        cin>>marks;
    }
    void put_data()
    {
        cout<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Roll No : "<<roll_no<<endl;
        cout<<"Marks : "<<marks<<endl<<endl;
        cin.ignore();
    }
};
int Student::count=0;
main()
{
    Student s1,s2,s3;
    s1.getdata();
    s1.put_data();
    s2.getdata();
    s2.put_data();
    s3.getdata();
    s3.put_data();
    cout<<"Value of count : "<<s3.count<<endl;
}
