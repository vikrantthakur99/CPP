#include<iostream>
using namespace std;

class Rectangle
{
	public:
	int length;
	int breadth;
	
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
    /* 
	Rectangle *ptr;   //declaring the pointer in the stack
	ptr1=&r1;      //assigning the pointer 
    ptr2=&r2;      
	*/
    
	Rectangle *ptr1 = new Rectangle();	//declaring the pointer in the heap memory
	Rectangle *ptr2 = new Rectangle();
	ptr1->length=10;  
	ptr1->breadth=5;
	cout<<ptr1->area()<<endl;
    cout<<ptr1->perimeter()<<endl;
    
    ptr2->length=20;   //we have declared the pointers for the two variables or objects i.e r1 and r2 
	ptr2->breadth=30;
	cout<<ptr2->area()<<endl;
    cout<<ptr2->perimeter()<<endl;
}

