#include<iostream>
using namespace std;

class Rectangle
{
	public:   //we use public so that values can we read
	int length;
	int breadth;
	
	int area()  //area a function
	{
	return length*breadth;  
	}
	int perimeter() //perimeter a function too
	{ 
	return 2*(length+breadth);	
	}
};

int main()
{
	Rectangle r1,r2;   //Rectangle is user defined datatype and r1,r2 are objects of the of that type also r1,r2 are variables of Rectangle type
	
	//for the r1 object
	r1.length=10;     //for assigning the value we use . operator with object.decalred variable for reading value in the class
	r1.breadth=5;      
	cout<<r1.area()<<endl;
	cout<<r1.perimeter()<<endl;
    //for the r2 object
    r2.length=20;  
    r2.breadth=30;
    cout<<r2.area()<<endl;
    cout<<r2.perimeter()<<endl;
}