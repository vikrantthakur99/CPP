#include<iostream>
#include<cmath>
using namespace std;

int main ()
{
	float a,b,c,d,r1,r2;
	cout<<"Enter a,b,c:";
	cin>>a>>b>>c;
	
	d=b*b-4*a*c;
	
	if(d==0)
	{
		cout<<"Roots are real and equal "<<endl;
		cout<<(-b/(2*a));
	}
	else if(d>0)
	{
		cout<<"Roots are real and unequal"<<endl;
		cout<<(-b+sqrt(d)/(2*a));
	}
	else 
	cout<<"Imaginary"<<endl;
    return 0;
}