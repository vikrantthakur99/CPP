#include<iostream>
using namespace std;

class Rectangle
{
public:

int length;
int breadth;

Rectangle(int length,int breadth)
{
this->length=length; //this pointer is used to point the length 
this->breadth=breadth;	
}	
int area()
{
return (length*breadth);	
}
int perimeter()
{
return 2*(length+breadth);	
}
};

int main()
{
Rectangle r1(10,5);
cout<<r1.area()<<endl;
cout<<r1.perimeter()<<endl;
return 0;	
}





