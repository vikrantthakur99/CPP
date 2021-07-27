#include <iostream>
#include <string>
using namespace std;

int main()
{   
     /*  for changing upper case to lower  case
    string str = "WELCOME";
    for (int i=0;str[i]!='\0';i++)
    {
    	str[i]=str[i]+32;
	}
	cout<<str;
	*/
	
	
    //for changing upper case and lower case with numbers to lower case
	string str = "WeLcOme6";
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]>=97 && str[i]<=122)
		{
			str[i]=str[i]-32; //str[i]-=32;
		}
	}
	cout<<str;
	return 0;   
}