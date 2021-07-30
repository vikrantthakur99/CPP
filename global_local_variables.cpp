#include<iostream>
using namespace std;

int g=5;   //global variable
void fun()
{
g++;
{
	int g=1;  //local variable 
	g++;
	cout<<g<<endl;   /*if we declared same variale as gloable variable inside the function on separate block then the bloack local variable will get executed not 
	                   not the global variable because the local variable is nearest to the scope to it */
}
cout<<g<<endl;
}
int main() 
{
cout<<g<<endl;
fun();
cout<<g<<endl;
}