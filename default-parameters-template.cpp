#include<iostream>
using namespace std;

template<class T1=int, class T2=float, class T3=char>
class Vik
{
public:
T1 a;
T2 b;
T3 c;

Vik(T1 x, T2 y, T3 z)
{
a=x;
b=y;	
c=z;
}

void display()	
{
cout<<"The value of a is "<<a<<endl;
cout<<"The value of b is "<<b<<endl;
cout<<"The value of c is "<<c<<endl;
}
};

int main()
{
Vik<> v(2,2.4,'d');
v.display();
cout<<endl;

Vik<float,char,char> g(2.3,'a','d'); //we can also specify the type later 
g.display();
	
}