#include<iostream>
using namespace std;
int main ()
{
  int n,i,sum=0;
  cout<<"Enter the value of n : ";
  cin>>n;
  
  for (i=1;i<n;i++)
  {
  	sum+=i; //sum=sum+i;
  }
  cout<<"Sum of first natural numbers is"<<sum<<endl;
   return 0;
}