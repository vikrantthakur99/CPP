#include <iostream>
using namespace std;

int main()
{
    int A[10]={2,3,4,5,6,7,8,9,10,11};
    int key,i,n=10;
    
    cout<<"Enter the key:";
    cin>>key;
    
    for(i=0;i<10;i++)
    if(key==A[i])
    {
    	cout<<"Element is found at:"<<i<<endl;
    	exit(0);
	}
	cout<<"Element is not found"<<endl;
    return 0;
}