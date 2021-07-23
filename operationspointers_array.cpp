 #include <iostream>
using namespace std;

int main()
{
	int A[5]={2,4,6,8,10};
	int *p=A;int *q=&A[3];int d;
	
	cout<<*p<<endl;
	p++;
	cout<<*p<<endl;
	p--;
	cout<<*p<<endl;
	p+=2;
	cout<<*p<<endl;
	p-=2;
	cout<<*p<<endl;
	d=q-p;
	cout<<d<<endl;
	
	return 0;  
}
