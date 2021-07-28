#include <iostream>
using namespace std;

     // FUNCTION PROGRAM FOR FINDING THE MAXIMUM OF THREE NUMBERES
     
    float max(int x,int y,int z)
	{
		if(x>y && x>z)
		{
			return x;
		}
		else if(y>z)
		return y;
		else
		return z;
	}
	int main()
	{
		int a,b,c,result;
		cout<<"Enter your first number ";
		cin>>a;
		cout<<"Enter your second number ";
		cin>>b;
		cout<<"Enter your third number ";
		cin>>c;
		
		result=max(a,b,c);
		cout<<"Maximum number is "<<result;	
		 
   return 0;
}