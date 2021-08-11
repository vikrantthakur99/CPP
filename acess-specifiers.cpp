#include<iostream>
using namespace std;

class Rectangle
{
    private:
    int length;
    int breadth;
            
    public:
    	
    void setLength(int l)
	{
	length=l;	
	}	
	void setBreadth(int b)
	{
	breadth=b;	
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
    return length*breadth;	
	}
    int perimeter()
    {
    return 2*(length+breadth);	
	}
};

int main()
{
Rectangle r1;
r1.setLength(10); //as we canot access the private members so we have make the func of set and get to access and getting the value 
r1.setBreadth(5);
cout<<"Length is "<<r1.getLength()<<endl;
cout<<"Breadth is "<<r1.getBreadth()<<endl;
cout<<"Area is "<<r1.area()<<endl;
cout<<"Perimter is "<<r1.perimeter()<<endl;
}

    