#include <iostream>
using namespace std;
int main() {

int hour;
cout<<"Enter the hour time:";
cin>>hour;

if(hour>=9 && hour<=18)    //we have to write hour both times with  use of AND operator
{
	cout<<"It is a working hour";
}
else
{
	cout<<"It is a leisure hour";
}
return 0;
}