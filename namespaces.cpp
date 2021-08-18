#include<iostream>
using namespace std;

//namespaceS are used to define the separate block of code that we can decalare by using the scope resolution 

namespace first
{
void fun()
{
cout<<"I am first"<<endl;	
}
}

namespace second
{
void fun()
{
cout<<"I am second"<<endl;	
}
}

int main()
{
first::fun();	
second::fun();
}