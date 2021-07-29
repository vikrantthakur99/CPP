#include<iostream>
using namespace std;

template<class T>
T maxim (T a,T b)
{
	return a>b?a:b;
}
int main() 
{
cout<<maxim (2,3)<<endl;
cout<<maxim (2.3,3.5)<<endl;
cout<<maxim (2.4f,5.3f)<<endl;
return 0;
}

