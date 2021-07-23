 #include <iostream>
using namespace std;

int main()
{
	int a=10;
	int *p=&a;
	
	cout<<a<<endl;   
    cout<<&a<<endl;   //some adress of a
    cout<<p<<endl;   //p is a pointer which is storing the addrress of a so it will display address of a
    cout<<&p<<endl;  // p is also a variable having its own address 
    cout<<*p<<endl;  //it will display the data where p is pointing now p is pointing towards a and a is containg value of 10

	return 0;  
}
