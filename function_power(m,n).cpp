#include<iostream>
using namespace std;

int power(int x,int y)
{
   int i,power=1;
   for(i=1;i<=y;i++)
   power=power*x;
   return power;

}
int main() 
{
   int r,x,y;
   cout<<"Enter the value of x ";
   cin>>x;
   cout<<"Enter the value of y ";
   cin>>y;
   r=power(x,y);
   
   cout<<"The result is "<<r<<endl;
   return 0;
}