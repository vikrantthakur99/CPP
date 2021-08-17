#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
public:
int id;
string name;

static int total;

Employee(string n)
{
total++;	
name =n;
id=total;	
}	

void display()	
{
cout<<"Employee id is "<<id<<endl<<"Employee Name is "<<name<<endl;	
}
};

int Employee::total=0;

int main()
{
Employee e1("Honey");	
Employee e2("Money");
Employee e3("Khan");
Employee e4("Sushma");
Employee e5("Sam");

e1.display();
e4.display();
cout<<"Total Employee Strenth is "<<Employee::total<<endl;
}


















