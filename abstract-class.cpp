#include<iostream>
using namespace std;

class Base
{
public: 
void fun1()   
{
cout<<"fun1 of base"<<endl;	//some concrete code
}
virtual void fun2()=0; //pure virtual fun 	
};

//class base is the abstract class cause it has som econcrete code and some pure virtal fun
class Derived:public Base
{
public:
void fun2()
{
cout<<"fun2 of derived"<<endl;	
}	
};

int main()
{
Base *p=new Derived();
p->fun2();	
}

















