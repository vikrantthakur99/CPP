#include<iostream>
using namespace std;

class BasicCar
{
public:	
virtual void start()  //as we have declared basic car with the ptr then it will be called so to change it we use the virtaul fun
{
cout<<"Basic car started"<<endl;	
}
};

class AdvancedCar:public BasicCar
{
public:	
void start()
{
cout<<"Advanced car started"<<endl;	
}
};

int main()
{
BasicCar *p=new AdvancedCar();
p->start();	
} 

//by default the fun will be called based on its obj now whn we have a case of a pointer we can call the other fun by the use of the pointer