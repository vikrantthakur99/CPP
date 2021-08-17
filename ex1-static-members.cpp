#include<iostream>
#include<string.h>

using namespace std;

class Student
{
public:
int Rollno;
string name;

static int addNo;
Student(string n)
{
addNo++;
name=n;
Rollno=addNo;	
}

void display()
{
cout<<"Name "<<name<<endl<<" Roll no "<<Rollno<<endl;
}
};

int Student::addNo=0;

int main()
{
Student s1("Ravi");	
Student s2("Mani");
Student s3("Vik");
s1.display();
s3.display();
cout<<"Number of Addmission are "<<Student::addNo<<endl;
}


















