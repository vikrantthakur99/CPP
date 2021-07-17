// we have to find the sum of all elements in an array

#include <iostream>
using namespace std;

int main()
{
    int A[]={2,4,6,7,8,9};
    int i,sum=0;
    
    for(i=0;i<6;i++)
    {
    sum=sum+A[i];
	}
	cout<<sum;
    return 0;
}