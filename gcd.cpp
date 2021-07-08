#include<iostream>
using namespace std;
int main ()
{
int m,n;
cout<<"Enter the value of m & n:";
cin>>m>>n;

while(m!=n)
{
	if(m>n)
		m=m-n;
	
	else if(n>m)
	
		n=n-m;
}
cout<<"The GCD of the number is: "<<m;
   return 0;
}
