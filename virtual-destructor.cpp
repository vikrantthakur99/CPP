#include<iostream>
using namespace std;

class Base
{
public:
virtual ~Base()  //we use virtaul when we create the bse class pointer and derived class obj
{
cout<<"Destructor of Base"<<endl;	
}	
};

class Derived:public Base
{
public:	
~Derived()
{
cout<<"Destructor of Derived"<<endl;	
}
};

void fun()
{
Base *p= new Derived();	
delete p;
}

int main()
{
fun();	
}


