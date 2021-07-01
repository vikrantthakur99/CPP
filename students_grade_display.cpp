#include<iostream>
using namespace std;
int main ()
{
int m1,m2,m3,total;
float avg;

cout<<"Enter the marks of 3 subjects:"<<endl;
cin>>m1>>m2>>m3;
total=m1+m2+m3;
avg=total/3.0;
cout<<"Total Marks"<<total<<endl;
cout<<"Average"<<avg<<endl;

if (avg>=60)
{
	cout<<"Grade A"<<endl;
}
else if(avg>=35 && avg<60)
{
	cout<<"Grade is B"<<endl;
}
	else  if(avg<35)
{	
    cout<<"Grade is C"<<endl;
}
    return 0;
}