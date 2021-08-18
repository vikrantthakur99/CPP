#include<iostream>
using namespace std;

/*
template<class T1,class T2, class T3...>
class class name
*/

template<class T1, class T2>
class myClass
{
public:
T1 data1;
T2 data2;	
myClass(T1 a, T2 b)
{
data1=a;
data2=b;	
}

void display()
{
cout<<"Data1 value is "<<data1<<endl<<"Data2 value is "<<data2<<endl;	
}		
};

int main()
{
myClass<int,char> o(2,'A');
o.display();	
}