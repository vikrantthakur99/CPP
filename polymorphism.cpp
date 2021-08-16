#include<iostream>
using namespace std;

class Car
{
public:
virtual void start()
{
cout<<"Car started"<<endl;	
}	
};

class Innova:public Car
{
void start()
{
cout<<"Innova started"<<endl;	
}	
};

class Swift:public Car
{
public:
void start()
{
cout<<"Swift started"<<endl;	
}	
};

class Bmw:public Car
{
public:
void start()
{
cout<<"Bmw started"<<endl;	
}		
};

int main()
{
Car *p=new Innova();
p->start();	

p=new Swift();
p->start();	

p=new Bmw();
p->start(); //same statement has the differnt output called polymorphism
}










