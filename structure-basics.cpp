#include<iostream>
using namespace std;

struct Demo  //the only diff b/w a class and a structure is that we can use structure without the declaration of the public and private 
{
int x;
int y;

void Display()
{
cout<<x<<" "<<y<<endl;	
}	
};

int main()
{
Demo d;
d.x=10;
d.y=20;
d.Display();	
}





