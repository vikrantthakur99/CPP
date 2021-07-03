/*program to check the factors of a number then print the factors of the number. Also we need to check if the number is perfect number or not to check 
we need to add sum of all factors and check if it is double of n if yes then it is a peerfect number*/


#include<iostream>
using namespace std;
int main ()
{
int i,n,sum=0;
cout<<"Enter the value of n: ";
cin>>n;

for(i=1;i<=n;i++)
{
	if(n%i==0)
	{
	cout<<i<<endl;
    sum=sum+i;     //condition for sum of all possible factors
	}
}
cout<<"Sum of factor is: "<<sum<<endl;    
{
	if(2*n==sum)          //check perfect number or not
	{
		cout<<"Perfect Number"<<endl;
	}
	else
	cout<<"Not a perfect number";
}
   return 0;
}
