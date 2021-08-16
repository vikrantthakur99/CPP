#include<iostream>
using namespace std;

class Parent
{
public:	
virtual void display()	
{
cout<<"Display of Parent"<<endl;	
}
};

class Child:public Parent
{
public:	
void display()
{
cout<<"Display of child"<<endl;	
}
};

int main()
{
Parent *p=new Child(); //parent is pointer  and it is of object child
p->display();	
} 

//by default the fun will be called based on its obj now whn we have a case of a pointer we can call the other fun by the use of the pointer