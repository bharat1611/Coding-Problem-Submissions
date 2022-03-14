#include<iostream>
using namespace std;
class Student
{
public:
 int age;
 string name;
 string enroll_no;
 float marks;
void getStudent()
 {
 cout << "Enter age of student: ";
cin >> age;
 cout << "Enter Name of student: ";
cin >> name;
cout << "Enter Enrollment Number of student: ";
cin >> enroll_no;
cout << "Enter Marks of student: "; cin >> marks;
 }
};
class Faculty
{
public:
 string facultyName;
 string facultyCode;
 float salary;
 string deptt;
 int age;
 float experience;
 string gender;
void getFaculty ()
{
 cout << "Enter Faculty Name: ";
 cin >> facultyName;
 cout << "Enter Faculty Code: ";
 cin >> facultyCode;
 cout << "Enter Faculty Salary: ";
 cin >> salary;
 cout << "Enter Faculty Department:";
 cin >> deptt;
 cout << "Enter Faculty Age:";
 cin >> age;
 cout << "Enter Faculty Experience:";
 cin >> experience;
 cout << "Enter Faculty Gender:";
 cin >> gender;
}
};
class Person : public Student , public Faculty
{
public:
void display()
{
cout<<"Person details : \n" << "\n"<< "Student Age : " << Student::age << "\n" << "Student Name : " << Student::name << "\n"<< "Student Enrollment Number : " <<Student::enroll_no << "\n" << "Student Marks : " << Student::marks << "\n" <<"FacultyName : " << Faculty::facultyName << "\n" << "Faculty Code : " << Faculty::facultyCode<< "\n" << "Faculty Salary : " << Faculty::salary << "\n" << "Faculty Department : " <<Faculty::deptt << "\n" << "Faculty Age : " << Faculty::age << "\n" << "Faculty Experience : " << Faculty::experience <<"\n" << "Faculty Gender : " << Faculty::gender <<"\n" ;
}
};
int main()
{
Person obj1;
obj1.getStudent();
obj1.getFaculty();
 obj1.display();
return 0;
}

