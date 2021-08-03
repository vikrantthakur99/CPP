#include<iostream>
using namespace std;

class Rectangle
{
	private:
	int length;
	int breadth;
	
	public:
	void setLength(int l)  //setlength is used to set the length
	{
	if(l>=0)      //if condition is used so that l and b value should not be less than 0
	length=l;
	else
	length=0;
	}
	void setBreadth(int b)   //set are mutators 
	{
	if(b>=0)
	breadth=b;
	else
	breadth=0;
	}
 	int getLength()  //get length is used to get the length of the reactangle and assigns to l or b
    {
    return length;
	}
	int getBreadth()   //get are accessors
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
	Rectangle r;
	r.setLength(10);
	r.setBreadth(5);
	cout<<"Length is "<<r.getLength()<<endl;
	cout<<"Breadth is "<<r.getBreadth()<<endl;
	cout<<"Area is "<<r.area()<<endl;
	cout<<"Perimeter is "<<r.perimeter()<<endl;
}




