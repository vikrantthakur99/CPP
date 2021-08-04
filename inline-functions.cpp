#include<iostream>
using namespace std;

class Test
{
public:
	
void fun1()
{
cout<<"Inline Function"<<endl;	
}	
inline void fun2();  //to make the function inline we just use inline before the function 	
//now if the fnct body is declared outside the class it is automatically becomes inline function 
};

int main()
{
Test t;
t.fun1();
t.fun2();	
}

void Test::fun2()  
{
cout<<"Not Inline Function"<<endl;	
}







