 #include <iostream>
using namespace std;

int main()
{
	int A[5]={2,4,6,8,10};
	int *p=A;
	cout<<p<<endl;  //display the address of p
	for(int i=0;i<5;i++)
	{
		cout<<*p<<endl;
		p++;     //for displaying all elements in the array
	}
	cout<<p<<endl;	    //display the address of p after incementing
	return 0;   
}
