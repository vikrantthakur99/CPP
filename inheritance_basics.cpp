#include<iostream>
using namespace std;

class first
{
public:
int x;
void show()
{
cout<<x<<endl;	
}	
};

class second:public first
{
public:	
int y;
void display()
{
cout<<y<<endl;	
}	
};

int main()
{
//creating objs for class first
first f;
//passing the values 
f.x=10;
//calling the function
f.show();

second s;
s.y=20;
s.x=30;
s.display();
s.show();	
}













