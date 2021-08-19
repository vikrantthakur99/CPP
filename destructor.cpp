#include<iostream>
using namespace std;

class Demo
{
public:

Demo()
{
cout<<"Constructor has created"<<endl;	
}	
~Demo()
{
cout<<"Destructor has destroyed"<<endl;
}	
};

void display()
{
Demo d;
}

int main()
{
display();	
}