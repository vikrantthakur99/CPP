#include<iostream>
using namespace std;

class Base
{
public:

Base()	
{
cout<<"Default constructor of base "<<endl;	
}
Base(int x)
{
cout<<"Parametrized constructor of base "<<x<<endl;	
}
};

class Derived:public Base
{
public:

Derived()
{
cout<<"Default constructor of derived "<<endl;	
}
Derived(int y)
{
cout<<"Parametrized constructor of derived "<<y<<endl;	
}
Derived(int x,int y):Base(x)
{
cout<<"Parametrized constructor of derived "<<y<<endl;	
}
}
;

int main()
{
Derived d(10,20);	
}