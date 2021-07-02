#include<iostream>
using namespace std;
int main ()
{
	cout<<"Menu\n";
	cout<<"1. Add\n"<<"2. Sub\n"<<"3. Mul\n"<<"4. Div\n";
	
	int option;
	cout<<"Enter your choice:";
	cin>>option;
	float a,b,c;                      //user can select int datatype also float is used because of the correct division details
	cout<<"Enter two numbers:"<<endl;
	cin>>a>>b;
	switch(option)
	{
		case 1: c=a+b;
	    break;
	    
		case 2: c=a-b;
		break;
		
		case 3: c=a*b;
		break;
		
		case 4: c=a/b;
		break;
		
		default: cout<<"Invalid Choice"; 
	}
	cout<<"Result is: "<<c<<endl;
    return 0;
}