#include <iostream>
using namespace std;

int main()
{
    int A[]={6,10,5,3,12,1};
    int i,min;
    min=A[0];
    
    for(i=1;i<6;i++)
    {
    	if(min>A[i])
    	{
    		min=A[i];
		}
	}
	cout<<"Minimum number in the set of array is:"<<" "<<min;
    return 0;
}