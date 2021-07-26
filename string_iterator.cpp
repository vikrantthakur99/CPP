#include <iostream>
#include <string>
using namespace std;

int main()
{
    
   string str = "Vikrant";
   //string::iterator it;                        
  // for (it= str.begin();it!=str.end();it++)   //loop is been used to access the string from frontwards
  
   string::reverse_iterator it;
   for (it= str.rbegin();it!=str.rend();it++)   //loop is been used to access the string from backwards
   {
       cout<<*it;              //defernceing * is used to display the string 
   }
	
		
    return 0;   
}
