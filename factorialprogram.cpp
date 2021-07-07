#include<iostream>
using namespace std;
int main ()
{
int i,n,fact=1;
cout<<"Enter the value of n: ";
cin>>n;

for(i=1;i<=n;i++)
{	
fact=fact*i;
}
cout<<"Factorial of"<<" "<<n<< " is "<<fact;

   return 0;
}
