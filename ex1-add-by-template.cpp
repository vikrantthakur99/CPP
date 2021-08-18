#include<iostream>
using namespace std;

template<class T>
T add(T &a,T &b)
{
T result=a+b;
return result;	
}

int main()
{
int i=3;
int j=5;
cout<<"Addition of integer values are "<<add(i,j)<<endl;	

float m=3.4;
float n=5.2;
cout<<"Addition of floating values are "<<add(m,n)<<endl;	

}