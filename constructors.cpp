#include<iostream>
using namespace std;

class Rectangle
{
	private:
	int length;
	int breadth;
	
	public:
	
	/*
	Rectangle ()   //non parametrized constructor 
	{
	length=1;
	breadth=1;	
	}
	*/
		
	Rectangle (int l=1,int b =1)  // parametrized constructor  
	//we can assgin some defualt values in parameters so that we can use parametrized constructor to avoid overloading of the functions 
	{
	setLength(l);
	setBreadth(b);
	}
	
	Rectangle (Rectangle &r) //copy constructor by refrencing  
	{
	length=r.length;
	breadth=r.breadth;	
    }
	
	void setLength(int l)  
	{
	if(l>=0)      
	length=l;
	else
	length=0;
	}
	void setBreadth(int b)  
	{
	if(b>=0)
	breadth=b;
	else
	breadth=0;
	}
 	int getLength()  
    {
    return length;
	}
	int getBreadth() 
	{
	return breadth;
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
//Rectangle r1; //for non parametrized
Rectangle r1(10,5); //for parametrized
Rectangle r2(r1); //for copy constructor
cout<<r2.area()<<endl; //calling for copy constructor
cout<<r1.perimeter()<<endl;
}




