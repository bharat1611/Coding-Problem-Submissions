#include<iostream>
using namespace std;
int main()
{
int no_unit;
float charge,scharge;
char name[20];
cout<< "Enter name and number of units consumed : ";
cin>>name;
cin>>no_unit;
if(no_unit<=100)
charge=(0.60*no_unit);
else if(no_unit>100&&no_unit<=300)
{
charge=(100*0.60);
charge+=((no_unit-100)*0.80);
}
else if(no_unit>=300)
{
charge=(100*0.60);
charge+=(200*0.80);
charge+=((no_unit-300)*0.90);
}
if(charge<50)
charge=50;
if(charge>300)
{
scharge=(0.15*charge);
charge+=scharge;
}
cout<< "Electricity bill\n";
cout<<name<<" : : Rs"<<charge;
return(0);
}

