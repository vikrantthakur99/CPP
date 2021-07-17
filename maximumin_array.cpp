// we have to find the maximum number in the set of an array

#include <iostream>
using namespace std;

int main()
{
    int A[]={2,4,6,7,8,9};
    int i,max;
    max=0;
    
    for(i=1;i<6;i++)
    {
    	if(A[i]>max)
    	{
    		max=A[i];
		}
	}
	cout<<"Maximum number in the set of array is:"<<" "<<max;
    return 0;
}