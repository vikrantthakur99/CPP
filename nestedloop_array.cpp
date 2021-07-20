#include <iostream>
using namespace std;

int main()
{
    int i,j;

    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)   //for loop inside an for loop 
    	{
    		cout<<i<<j<<endl;   
		}
	}
	
    return 0;
}