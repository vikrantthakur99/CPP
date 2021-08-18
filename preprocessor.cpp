#include<iostream>
using namespace std;

//we can use #define for preprocessing also we can define the functions to it by passing the values as parameteres

#define PI 3.1245
#define max(x,y) (x>y?x:y)


int main()
{
	cout<<PI<<endl;
	cout<<"Maximum is "<<max(3,4)<<endl;	
}