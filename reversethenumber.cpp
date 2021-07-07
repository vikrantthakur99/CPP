#include<iostream>
using namespace std;
int main ()
{
int i,n,rev=0;
cout<<"Enter the vale of n:";
cin>>n;
while(n>0)
{
	rev=rev*10+n%10;
	n=n/10;
}
cout<<"Reverse of number is:"<<rev<<endl;
   return 0;
}
