#include<iostream>
using namespace std;

class complex{
    private:
    int real;
    int imag;
    public:
    complex(int r = 0, int i = 0){
        real = r;
        imag = i;
    }
    void display(){
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
    friend complex operator+(complex c1,complex c2);
    friend complex operator-(complex c1,complex c2);
    friend void operator==(complex c1,complex c2);
};

complex operator+(complex c1,complex c2){
    complex t;
    t.real = c1.real + c2.real;
    t.imag = c1.imag + c2.imag;
    return t;

}
complex operator-(complex c1,complex c2){
    complex t;
    t.real = c1.real - c2.real;
    t.imag = c1.imag - c2.imag;
    return t;
}
void operator==(complex c1,complex c2){
    if(c1.real ==c2.real && c1.imag ==c2.imag){
        cout<<"Both complex numbers are same"<<endl;
    }
    if(c1.real == c2.real){
        cout<<"The real part of both the complex number are same."<<endl;
    }
    else if(c1.imag ==c2.imag){
        cout<<"The complex part of both complex number are same."<<endl;
    }
    else{
        cout<<"Both numbers are different."<<endl;
    }
}
int main(){
    complex c1(3,2);
    complex c2(5,2);
    complex result;
    cout<<"The Sum of the two numbers is : ";
    result = c1 + c2;
    result.display();
    cout<<"The Difference of the two numbers is : ";
    result = c1 - c2;
    result.display();
    c1 == c2;
}
