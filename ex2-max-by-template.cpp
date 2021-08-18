#include<iostream>
using namespace std;

template<class T>
T max(T &a, T&b)
{	
return a<b?b:a; 	
}
int main()
{
int i=3;
int j=4;
cout<<"Maximum is "<<max(i,j)<<endl;

float m=3.4;
float n=2.2;
cout<<"Maximum is "<<max(m,n)<<endl;	
}