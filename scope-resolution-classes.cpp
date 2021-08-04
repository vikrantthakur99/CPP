#include<iostream>
using namespace std;

class Rectangle
{
	private:
	int length;
	int breadth;
	
	public:
	Rectangle(int l=1, int b=1);
	Rectangle(Rectangle &r2);
    int getLength() {return length;}
    int getBreadth() {return breadth;}
    int setLength(int l);
    int setBreadth(int b);
    int area();
    int perimeter();
    bool isSquare(); //to check  if rectangle is a square
    ~Rectangle(); //destructor used
};

int main()
{
Rectangle r1(10,10); //for parametrized
cout<<r1.area()<<endl; 
cout<<r1.perimeter()<<endl;
if(r1.isSquare()) //condition to check if the rectangle l=b then it is a square otherswise not 
cout<<"Yes it is a square "<<endl;
else
cout<<"No it is not a square"<<endl;
}

Rectangle::Rectangle(int l,int b) //scope resolution used as= first class name then ::then our function name
{
	length=l;
	breadth=b;
}
Rectangle::Rectangle(Rectangle &r)
{
	length=r.length;
	breadth=r.breadth;
}
int Rectangle::setLength(int l)  //for the return type= first return type then  class name then scope resolution then our function name
{
length=l;
}
int Rectangle::setBreadth(int b)
{
breadth=b;
}
int Rectangle::area()
{
return (length*breadth);	
}
int Rectangle::perimeter()
{
return 2*(length+breadth);	
}
bool Rectangle::isSquare() //it will check if the rectangle is equal to the square
{
return length==breadth;	
}
Rectangle::~Rectangle()  // it will destryoed the rectangle that it is the destructor used as = class name then scope resolution then ~ operator
{
cout<<"Rectangle is destroyed";	
}








