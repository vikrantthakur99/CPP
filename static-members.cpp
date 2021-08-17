#include<iostream>
using namespace std;

class Test
{
public:
int a;

static int count;

Test() //constructor used only for intializing the value	
{
int a=10;
count++;	
}	

static int getcount()
{
return count;	
}
};

int Test::count=0;

int main()
{
Test t1;
Test t2;

cout<<t1.count<<endl;
cout<<t2.count<<endl;
cout<<Test::count<<endl; //accessing the count by the use of the class too with the help of the scope resolution
cout<<t1.getcount()<<endl; //accessing the static members with the help of the objects 
cout<<Test::getcount()<<endl; //accessing the static members with the help of the class by scope resolution	
}

















